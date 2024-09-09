section14: # 169C74
  hidepokepic
  hidesprite 0x800F
  msgbox.default <18E2E5>
{
This POKéMON is really quite
energetic!
}
  call <1A6675>
  setflag 0x0828
  setflag 0x0291
  givePokemon 0x4002 80 ????????   
  copyvar 0x4031 temp1
  bufferPokemon buffer1 0x4002
  preparemsg <18E30D>
{
[player] received the [buffer1]
from PROF. OAK!
}
  waitmsg
  fanfare mus_obtain_key_item
  waitfanfare
  msgbox.yesno <1A56A7>
{
Do you want to give a nickname to
this [buffer1]?
}
  if.yes.goto <section15>
  if.no.goto <169CDC>
  end

section15: # 169CCC
  setvar var4 0
  call <1A74EB>
  goto <169CDC>
