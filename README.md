# ibmtpm-sm
forked from ibmtpm1119 and add sm algorithm
## ibmtpm-sm
```
./createprimary -si -opu tmppub.bin -opem tmppub.pem -ecc sm2p256 -nalg sm3 -halg sm3 -pwdk sig -v
./sign -hk 80000000 -halg sha256 -sm2 -if policies/aaa -os sig.bin -pwdk sig -v
./verifysignature -hk 80000000 -halg sha256 -if policies/aaa -is sig.bin -v
```
## test sm4
```
./createprimary -hi o -pwdk pps -tk pritk.bin -ch prich.bin
./create -hp 80000000 -sm4 -116 -kt f -kt p -opr sm4priv.bin -opu sm4pub.bin -pwdp pps -pwdk sm4
./load -hp 80000000 -ipr sm4priv.bin -ipu sm4pub.bin -pwdp pps 
./encryptdecrypt -hk 80000001 -if msg.bin -of enc.bin -pwdk sm4
./encryptdecrypt -hk 80000001 -d -if enc.bin -of dec.bin -pwdk sm4
```
