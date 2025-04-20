#use main
#use crypto
#use sha-512-genisis-block-maker(callid = shag2)
def calls(){

call.id(ec7e4fd1cef0ff244f7cfa6e852df29d29755a1a237a176e390befa1771235bec2e26a8c06320a9eea3cede8ed116113d776125e80752fe2a0b6effd1702d478)
call.id(e697a29ee5b8d099d47e4397a4d91e76d8b9b3b042dbad7d29fa1faf325bfb20cb2deaa03793926810b4a5a54948fd8cf7ec2c9c5bb91898dc9a25b6f5ac43dc)
call.id(f97e2923db228d6747fc426718baf22815df3dc8affc8978b827e30176e9c7a810d0e330c06c89c249ab2285457f6980f3bd0ae376b9f52886d2cd23807c8dd2)

           }

def genisis(){

genisis acc = root
dev acc = dev
vault acc = lock
crypto.genisis(shag2 = a97c1153c8422f6b8dc0b72eaec4e8ed98f4b2d2aa2722f8b1a13f39ab0eb86f95daa11d221062acc84b8136c6cc516c9e2f1705f740202fbcc562288351f0b1)

  }

dep calls.genisis 
%%fr %%git/coin/main.cc

main.end()
