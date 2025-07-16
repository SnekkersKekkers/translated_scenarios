MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("tr320",1);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChLayout(1);
MsgClose();
ChEye(5,3);
ChMouth(5,4);
ChMotion(5,3,1);
SEPlay("EV_SE_084",0,0.5);
ScrFadeIn(0);
Wait(50,0);
VoicePlay("B360522100_05_000");
MsgDisp("Hiiragi","Good, we made it in time to see the
sunset.");
MsgDisp("主人公","Yeah, it's beautiful.");
ChEye(5,0);
ChMotion(5,4);
VoicePlay("B360522100_05_010");
MsgDisp("Hiiragi","Yeah. The sky and castle are dyed
red...... It's like \"The Flapping Castle
is on Fire\".");
MsgDisp("主人公","Eh?
Is that a performance by the Habataki
Theater Company?");
ChEye(5,4);
ChMotion(5,0);
VoicePlay("B360522100_05_020");
MsgDisp("Hiiragi","Yes.
Before starting our activities, I would
come here on my own.");
MsgDisp("主人公","I see.");
ChEye(5,4);
ChMotion(5,2);
VoicePlay("B360522100_05_030");
MsgDisp("Hiiragi","Yes.
Back then, I would think of a play set in
this castle.");
ChMotion(5,2);
ChEyeOpenLevel(5,0);
VoicePlay("B360522100_05_040");
MsgDisp("Hiiragi","The idea for that performance was born
from the fiery red sky and castle tower.");
MsgDisp("主人公","......The play was born from this view.");
ChMotion(5,3);
Wait(22,0);
ChEye(5,3);
VoicePlay("B360522100_05_050");
MsgDisp("Hiiragi","Yes.
I wanted to see it with you once——");
ChEye(5,4);
ChMotion(5,0);
VoicePlay("B360522100_05_060");
MsgDisp("Hiiragi","No, I wanted to see it with you alone.");
MsgDisp("主人公","I see......
Thank you, ｛柊＊＊＊｝.");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
ChCheek(5,0);
