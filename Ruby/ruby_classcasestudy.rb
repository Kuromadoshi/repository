#!/usr/bin/ruby

# CASE STUDY
# create a class Customer with two methods:
# display_details: shows the details of the customer
# total_no_of_customers: displays total number of
# customers created in the system. good luck!

class Customer
   @@no_of_customers = 0
   def initialize (id, name, address)
      @cust_id = id
      @cust_name = name
      @cust_address = address
      @@no_of_customers += 1
   end
   def display_details
      puts "customer id: #@cust_id"
      puts "customer name: #@cust_name"
      puts "customer address: #@cust_address"
   end
   def Customer.total_no_of_customers
      puts "total number of customers: #@@no_of_customers"
   end
end

cust1 = Customer.new(001,"John","Sesame Street 19")
cust2 = Customer.new(002,"Paul","Bank Street 27")
cust3 = Customer.new(003,"Peter","Brown Street 35")

cust1.display_details
cust2.display_details
cust3.display_details

Customer.total_no_of_customers
