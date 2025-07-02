ChClose(7);
MsgClose();
BGMStop();
BGOpen("ho000",2);
ChOpen(7,255,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
ChMotion(7,0);
VoicePlay("K020701100_07_000");
MsgDisp("Mikage","Good work today.
Thanks.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("K020701100_07_010");
MsgDisp("Mikage","And...... here.");
MsgDisp("主人公","Hm?");
SEPlay("EV_SE_665");
SEWait();
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("K020701100_07_020");
MsgDisp("Mikage","Today's your birthday, right?");
MsgDisp("主人公","｛御影＊＊｝,
you remembered?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("K020701100_07_030");
MsgDisp("Mikage","Even if I look like this,
I still know the birthdays of everyone
in class, you know?");
MsgDisp("主人公","Hehe, amazing.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("K020701100_07_040");
MsgDisp("Mikage","But, it's a little difficult to
memorize everyone's preferences......
Sorry if it doesn't suit you.");
MsgDisp("主人公","Thank you very much!");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("K020701100_07_050");
MsgDisp("Mikage","That's a good response.
Well then, see you next year.");
MsgDisp("主人公","Huh?
Then, we won't be able to meet for a year?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,5);
VoicePlay("K020701100_07_060");
MsgDisp("Mikage","Hm? That's not it.
I'll give you another gift in one year.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ChClose(7);
Wait(30);
MsgDisp("主人公","(I celebrated my birthday
with ｛御影＊＊｝......
This is the best birthday ever!)");
MsgClose();
ScrFadeOut(0,0);
