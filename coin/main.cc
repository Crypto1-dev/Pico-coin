#use main
#use crypto

def transaction(){

  get
  sender = <address(username)>.sender
  amount = <amount>
  receiver = <address(username)>.receiver
               
                 }

def hash(){

  get
  picohash = <sha-1(crypto.filter(dif.filleasy.120))>.picohash 
  (crypto.transaction(id).hash).pick

          }

crypto.call *chain = PoW
crypto.call *supply = 1000000000
crypto.call *handle = transaction().hash()
crypto.call *plat = all ^fatal = catch
crypto.call *network = %%/git/coin/network.cc
crypto.call *blockchain + %%/git/coin/blockchain.cc

main.end()
