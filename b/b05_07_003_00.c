MsgClose();
BGOpen("tr400",0);
ChOpen(7,255,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("B050700300_44_000");
MsgDisp("Boy","Dad!
Quickly, quickly!");
VoicePlay("B050700300_40_010");
MsgDisp("Dad","Don't pull like that.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("B050700300_07_000");
MsgDisp("Mikage","I understand how that kid feels～");
MsgDisp("主人公","Eh?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("B050700300_07_010");
MsgDisp("Mikage","The scenery beyond that gate is different.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("B050700300_07_020");
MsgDisp("Mikage","\"Quickly, quickly!\"
I understand what that feels like.");
MsgDisp("主人公","Hehe.
｛御影＊＊｝, you're also somewhat in
high spirits aren't you?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("B050700300_07_030");
MsgDisp("Mikage","Well yeah.
This is a place that's been far removed
from me.");
MsgDisp("主人公","Is that right?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("B050700300_07_040");
MsgDisp("Mikage","Yeah.
Let's chat once we get inside.
We're losing time aren't we?");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(7);
ScrFadeOut(0);
MsgDisp("主人公","(Maybe he's not really gone to an
amusement park before, like how he's not
really gone bowling...?)");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE",0,0.7);
SEWait();
Wait(10,0);
SEPlay("EV_SE_782");
SEWait();
SEPlay("EV_SE_783");
SEWait();
Wait(10,0);
VoicePlay("B050700300_07_050");
MsgDisp("Mikage","We've entered into the land of dreams!");
MsgClose();
Wait(20);
BGMPlay("BGM_C07_MIKAGE_I",0.01);
StlOpen("ev_07_04");
StlEye(7,0);
StlMouth(7,0);
ScrFadeIn(0);
VoicePlay("B050700300_07_060");
MsgDisp("Mikage","A-Amazing.
The inside is like a completely different
world.");
MsgDisp("主人公","Yes, I'm excited!");
StlEye(7,1);
StlMouth(7,1);
VoicePlay("B050700300_07_070");
MsgDisp("Mikage","Yes, it looks like it's sparkling in my
eyes too.
Aren't the kids getting too excited?");
StlEye(7,0);
StlMouth(7,0);
StlEyeOpenLevel(7,5,1);
VoicePlay("B050700300_07_080");
MsgDisp("Mikage","Hey the rollercoaster is massive too!
The ferris wheel——");
StlEye(7,0);
StlMouth(7,1);
VoicePlay("B050700300_07_090");
MsgDisp("Mikage","Is it really that tall...?");
MsgDisp("主人公","(Looks like ｛御影＊＊｝ is more
surprised than the kids?)");
MsgClose();
ScrFadeOut(0);
StlClose();
BGMVol(0.5,2);
BGOpen("tr410",0);
MsgClose();
ChOpen(7,255,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("B050700300_07_100");
MsgDisp("Mikage","Thank you.
This is thanks to you accompanying me
today.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,2);
ChEyeOpenLevel(7,0);
VoicePlay("B050700300_07_110");
MsgDisp("Mikage","I'm already kind of satisfied.");
MsgDisp("主人公","Ehh∋
We're just getting started though?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3);
ChEyeOpenLevel(7,10);
VoicePlay("B050700300_07_120");
MsgDisp("Mikage","That's right.
I'll be counting on you to stick with me
for everything the free pass covers today.");
MsgDisp("主人公","(After bowling, the next thing that
｛御影＊＊｝ wants to do is go to the
theme park...Alright, I'll enjoy it with
him too!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChPrmTblAdd(7,0);
