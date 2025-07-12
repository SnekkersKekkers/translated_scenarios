BGOpen("sc510",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Huh, over there is——");
MsgClose();
BGMPlay("BGM_C22_HIKARU_A",0.01);
ChOpen(22,254,0,3,3,0,#1,0,0);
VoicePlay("F102210000_22_000");
MsgDisp("Hikaru","Heheh♪");
MsgDisp("主人公","｛ひかる＊｝!
You seem to be in a good 
mood, don't you?");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("F102210000_22_010");
MsgDisp("Hikaru","Oh, Mari.
Hikaru got some really cute flowers 
from the gardening club♪");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,0,1);
ChEyeOpenLevel(22,0);
VoicePlay("F102210000_22_020");
MsgDisp("Hikaru","The classroom is kind of drab,
so Hikaru decorated it cutely and it
was a big hit! Hikaru is so happy▼");
MsgDisp("主人公","Wow...!");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("F102210000_22_030");
MsgDisp("Hikaru","If you'd like, come see it Mari.
Salut!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(22);
MsgDisp("主人公","(Maybe I'll go see it later...Hm?)");
VoicePlay("F102210000_40_000");
MsgDisp("Garden Club Member","The flowers are missing from
the flowerbed! Who took 
them without permission∋");
MsgDisp("主人公","(Eh? It couldn't be...)");
MsgClose();
ScrFadeOut(0,0);
