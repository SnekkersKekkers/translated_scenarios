BGOpen("sc510",0);
ChLayout(1);
MsgClose();
BGMPlay("BGM_C22_HIKARU_A",0.01);
ChOpen(22,254,0,3,0,0,-1,0,0);
ScrFadeIn(0);
ChMotion(22,5,1);
VoicePlay("F102210001_22_000");
MsgDisp("Hikaru","Hm～m, I'm in a good
mood today too♪");
MsgDisp("主人公","Ah,｛ひかる＊｝!
You look like you're in high spirits.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("F102210001_22_010");
MsgDisp("Hikaru","I got a nice painting from the art club
so I put it up in the classroom 
and it looks really stylish
Hikaru's in a great mood▼");
MsgDisp("主人公","Wow, is that so!
By the way, about the flowers
from the other d——");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,5,1);
VoicePlay("F102210001_22_020");
MsgDisp("Hikaru","Ah, I'll go get another one.
Salut!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(22);
MsgDisp("主人公","She's gone...");
VoicePlay("F102210001_46_000");
MsgDisp("Art Club Member","I can't find the painting 
that was in the art club room?
Maybe it's mixed in somewhere...?");
MsgDisp("主人公","(Deja vu...?)");
MsgClose();
ScrFadeOut(0,0);
