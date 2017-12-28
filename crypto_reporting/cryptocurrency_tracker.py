# This program keeps track of various cryptocurrency prices by grabbing price information from various cryptocurrency exchanges. Here are the following features:
# -Alerts: Will notify the user when the price of a particular coin has hit a target price or percentage change. Text message/call alerts. NOTE: RESEARCH PHONE CALL SERVICES
# -Change Reports: Produces reports on returns on investments.
# -Expenditure Tracking: Produces reports on how much you've invested and how much in fees you've paid for transactions.
# -Projections: Looks at growth rates and makes assumptions as to where your investments might go next month, year, decade, etc.
# -Target Sell Recommendations: Set the target number at which you will sell all your crypto assets. This feature will then make suggestions as to what cryptos to 
#  buy and hold to reach your target number as quickly as possible, based on various factors like individual and aggregate growth rate, current amount invested, and time horizon.

# 0) Check prices for each tracked coin and see if targets have been hit to make buy/sell suggestions via alerts

# NOTE: NEED TO PIP INSTALL coinbase MODULE FIRST
from coinbase.wallet.client import Client

client = Client(<api_key>, <api_secret>)




################################################################################################################################
################################################################################################################################
# BUY PRICES
# Get the total price to buy one bitcoin or ether.

# Note that exchange rates fluctuates so the price is only correct for seconds at the time. This buy price includes standard Coinbase fee (1%) but excludes any other fees including bank fees. If you need more accurate price estimate for a specific payment method or amount, see buy bitcoin endpoint and quote: true option.

# This endpoint doesn’t require authentication.

btc_buy_price_coinbase = client.get_buy_price(currency_pair = 'BTC-USD')
eth_buy_price_coinbase = client.get_buy_price(currency_pair = 'ETH-USD')
ltc_buy_price_coinbase = client.get_buy_price(currency_pair = 'LTC-USD')


################################################################################################################################
################################################################################################################################
# SELL PRICES
# Get the total price to sell one bitcoin or ether.

# Note that exchange rates fluctuates so the price is only correct for seconds at the time. This sell price includes standard Coinbase fee (1%) but excludes any other fees including bank fees. If you need more accurate price estimate for a specific payment method or amount, see sell bitcoin endpoint and quote: true option.

# This endpoint doesn’t require authentication.

btc_sell_price_coinbase = client.get_sell_price(currency_pair = 'BTC-USD')
eth_sell_price_coinbase = client.get_sell_price(currency_pair = 'ETH-USD')
ltc_sell_price_coinbase = client.get_sell_price(currency_pair = 'LTC-USD')


# Coinbase: https://developers.coinbase.com/api/v2#prices
# Kraken: https://www.kraken.com/help/api#general-usage
# Bitstamp: https://www.bitstamp.net/api/


################################################################################################################################
################################################################################################################################


# 1) Open up reports, if they exists; else, create new ones. Log date, price, etc.

# 2) 

# 1)

# 1)

# 1) 