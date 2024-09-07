### gameplay changes

☑️ open the maps up

> [!NOTE]
> TO DO LIST

- quick start (set names, straight into the lab and choose your starter, give oaks parcel)
- change Mart items in each Mart, making key items easier to get
- Make the rocket hider quicker, make poke tower optional 


### starter change ☑️
`setvar temp1, 2, 3, 4 then pokemon number/id`
```
section0: # 169B87
  lock
  faceplayer
  setvar temp1 0
  setvar temp2 151
  setvar temp3 4
  setvar temp4 7
  if.compare.goto 0x4055 >= 3 <169DC0>
  if.compare.goto 0x4055 == 2 <169BBD>
  msgbox.default <18E9F5>
{
Those are POKé BALLS.
They contain POKéMON!
}
  release
  end
```
#### starter level ☑️
`givePokemon`
```
section14: # 169C50
  hidepokepic
  hidesprite 0x800F
  msgbox.default <18E2C1>
{
This POKéMON is really quite
energetic!
}


  call <1A6651>
  setflag 0x0828
  setflag 0x0291
  givePokemon 0x4002 100 ????????   
  copyvar 0x4031 temp1
  bufferPokemon buffer1 0x4002
  preparemsg <18E2E9>
{
[player] received the [buffer1]
from PROF. OAK!
}
  waitmsg
  fanfare mus_obtain_key_item
  waitfanfare
  msgbox.yesno <1A5683>
{
Do you want to give a nickname to
this [buffer1]?
}
  if.yes.goto <section15>
  if.no.goto <169CB8>
  end

section15: # 169CA8
  setvar var4 0
  call <1A74C7>
  goto <169CB8>

```


