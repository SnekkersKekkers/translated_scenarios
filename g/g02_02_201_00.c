MsgClose();
ChOpen(2,255,2,0,2,#1,#1,0,0);
VoicePlay("G020220100_02_000");
MsgDisp("Sassa","There's so many fireflies...");
MsgDisp("主人公","Yeah.
It's beautiful.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("G020220100_02_010");
MsgDisp("Sassa","Is it...?
They all look desperate to me, not pretty
or anything.");
ChEye(2,0);
ChMouth(2,2);
ChMotion(2,4);
VoicePlay("G020220100_02_020");
MsgDisp("Sassa","Though maybe I just think that 'cause of
how I feel.");
MsgDisp("主人公","How you feel, ｛颯砂＊＊｝?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("G020220100_02_030");
MsgDisp("Sassa","Yeah. I thought I was running in first
next to you, but I got passed... So now I
guess it feels like I'm looking at
someone's back.");
MsgDisp("主人公","Um...");
ChEye(2,2);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("G020220100_02_040");
MsgDisp("Sassa","Sorry, sorry.
Don't look at me like that.
I don't want to get any lamer than this.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("G020220100_02_050");
MsgDisp("Sassa","I think there's still time to the finish
line.
The real race starts now.");
MsgDisp("主人公","(｛颯砂＊＊｝...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(2,#1);
ChMouthOpenLevel(2,#1);
ChCheek(2,0);
