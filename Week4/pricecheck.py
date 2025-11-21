#start the code
def main():
    #declare array for items
    prices=[]

#initialize the total
    total =0.0
#initialize the average
    average = 0.0

    #ask the use to enter the 5 prices
    print("Enter the prices of the 5 items: ")

    #save the prices into the array
    for i in range(5):
        price = float (input(f"Price of item {i+1}: "))
        prices.append(price)

    #use a loop to calculate the total
    for price in prices:
        total +=price

    #calculate the average
    average = total/len(prices)

    #Show total and average

    print(f"\nTotal price: ${total: .2f}")
    print(f"\nAverage price: ${average: .2f}")

    #control flow for response

    if total > 100:
        print("you have no money")
    elif 50 <= total <= 100:
        print("great job staying on budget")
    else: 
        print("coupon mania, wow all the savings you must have made")

#run the main function

if __name__=="__main__":
    main()