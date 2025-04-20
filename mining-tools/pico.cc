#use main
#use crypto
#use source
#raspberry-pi-pico(callid = rpico)

#grab (crypto) %%/git/coin/
#grab (mine) %%/git/mine/

@run rpico
 crypto(grab).mine(grab)

rpico.all/ping

main.end()
