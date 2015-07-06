import os
import re

#	Order Class
class order:
	def __init__( self, id, offerId, email, address, city, state, zipCode, creditCard ):
		self.id = id
		self.offerId = offerId
		self.email = email
		self.address = address
		self.city = city
		self.state = state
		self.zipCode = zipCode
		self.creditCard = creditCard
	
	def printOrder( self ):
		print( "ORDER: ")
		print( self.id )
		print( self.offerId )
		print( self.email )
		print( self.address )
		print( self.city )
		print( self.state )
		print( self.zipCode )
		print( self.creditCard )
		print( "______________")


def main():
	n = int( input() )
	x = n
	orders = []
	regStr = "(\d*),(.*),(.*),(.*),(.*),(.*),(.*),(.*)"
	#	Get all orders
	while x != 0:
		inString = str( input() )
		match = re.findall( regStr, inString )
		if match:
			id = match[0][0]
			offerId = match[0][1]
			email = match[0][2].lower()
			address = match[0][3].lower()
			city = match[0][4].lower()
			state = match[0][5].lower()
			zipCode = match[0][6]
			creditCard = match[0][7]
			newOrder = order( id, offerId, email, address, city, state, zipCode, creditCard )
			orders.append( newOrder )
		x -= 1

	fraudulentOrders = []
	i = 0
	
	#	Check all orders
	while i < n:
		orders[i].printOrder()
		j = i + 1
		while j < n:
			different = 0
			orders[j].printOrder()
			#	Check for same deal id
			if orders[i].offerId == orders[j].offerId and orders[i].creditCard != orders[j].creditCard:
				#	Check email
				if orders[i].email == orders[j].email:
					fraudulentOrders.append( orders[i].id, orders[j].id )
					continue

				#	City
				if orders[i].city != orders[j].city:
					continue

				#	Zip
				zip1 = orders[i].zipCode.replace( "-", "" )
				zip2 = orders[j].zipCode.replace( "-", "" )
				if zip1 != zip2:
					continue

				#	State
				state1 = orders[i].state
				state2 = orders[j].state
				if state1 != state2:
					#	Check exections
					if ( state1 == "IL" or state1 == "Illinois" ) and ( state2 != "IL" or state2 != "Illinois" ):
						fraudulentOrders.append( orders[i].id, orders[j].id )
						continue
					if ( state1 == "CA" or state1 == "California" ) and ( state2 != "CA" or state2 != "California" ):
						fraudulentOrders.append( orders[i].id, orders[j].id )
						continue
					if ( state1 == "NY" or state1 == "New York" ) and ( state2 != "NY" or state2 != "New York" ):
						fraudulentOrders.append( orders[i].id, orders[j].id )
						continue

				#	Check Address
				address1 = orders[i].address
				address2 = orders[j].address
				reg = r'(st.|street|road|rd.)'
				match = re.findall( reg, address1 )
				if match:
					match2 = re.findall( reg, address2 )
					if match2:
						if ( match == "st." or match == "street" ) and ( match2 != "street" or match2 != "st." ):
							fraudulentOrders.append( orders[i].id, orders[j].id )
							continue
						if ( match == "rd." or match == "road" ) and ( match2 != "road" or match2 != "rd." ):
							fraudulentOrders.append( orders[i].id, orders[j].id )
							continue

						if not different:
							address1.replace( match[0], "" )
							address2.replace( match2[0], "" )
							if address1 != address2:
								fraudulentOrders.append( orders[i].id, orders[j].id )
							continue
			j += 1
		i += 1

	print( fraudulentOrders )

if __name__ == "__main__":
	main()
