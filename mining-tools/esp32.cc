#use main
#use crypto
#use source
#esp32(callid = esp)

#grab (crypto) %%/git/coin/
#grab (mine) %%/git/mine/

@run esp
   crypto(grab).mine(grab)

esp.all/ping

main.end()
