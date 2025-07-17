BGOpen("sc520",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(This is nice weather...
Maybe I should take a break in the
courtyard for a bit?)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(5,254,4,0,4,#1,#1,0,0);
MsgDisp("主人公","Ah, ｛柊＊＊＊｝.
What are you up to?");
ChEye(5,4);
VoicePlay("G110500100_05_000");
MsgDisp("Hiiragi","I stopped by the staffroom to pick up some
handouts for the student council room.
I have a lot of errands to run.");
MsgDisp("主人公","That seems difficult, I'll help too.");
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
MsgClose();
ScrFadeOut(0,0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc605",0);
BGMPlay("BGM_C05_HIIRAGI_B",0.01);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
ScrFadeIn(0);
VoicePlay("G110500100_05_010");
MsgDisp("Hiiragi","Thank you.
Thanks to you, I didn't have to make
another trip.");
MsgDisp("主人公","Hehe, you're welcome.");
MsgClose();
MsgClose();
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
SEPlay("EV_SE_713");
SEWait();
SEPlay("EV_SE_596",0,0.5);
SEWait();
BGOpen("ev005",0);
MsgClose();
ChOpen(5,100,0,0,0,#1,#1,0,0);
SEPlay("EV_SE_712");
ScrFadeIn(0);
MsgDisp("主人公","You're still doing student council work on
your lunch break?");
SEStop("EV_SE_712",0);
ChEye(5,0);
ChMouth(5,1);
ChMotion(5,0);
VoicePlay("G110500100_05_020");
MsgDisp("Hiiragi","Yes.
Oh, but I'm not being forced to do it
though.");
ChEye(5,0);
ChMouth(5,1);
ChMotion(5,2);
VoicePlay("G110500100_05_030");
MsgDisp("Hiiragi","I'm not good with computers, and after
school I still have to do work with the
theatre company too, right?");
MsgDisp("主人公","I see.
｛柊＊＊＊｝, don't push
yourself too hard, okay?");
ChEye(5,0);
ChMouth(5,1);
ChMotion(5,0);
VoicePlay("G110500100_05_040");
MsgDisp("Hiiragi","Thank you.
But I like working here on the computer
during my lunch break.");
ChEye(5,1);
ChMouth(5,1);
ChMotion(5,1);
VoicePlay("G110500100_05_050");
MsgDisp("Hiiragi","Why do you think that is?");
MsgDisp("主人公","Why?");
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,12);
VoicePlay("G110500100_05_060");
MsgDisp("Hiiragi","From that window there, sometimes I can
see you facing your canvas.
You look like you're having fun.");
MsgDisp("主人公","Eh?");
ChEye(5,0);
ChMouth(5,1);
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,#1);
VoicePlay("G110500100_05_070");
MsgDisp("Hiiragi","I didn't mean to peek, but if it's okay
with you, I'd like to see your work next
time.");
MsgDisp("主人公","... That is if I can make something I'm
pleased with?");
ChEye(5,1);
ChMouth(5,1);
ChMotion(5,1);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,12);
VoicePlay("G110500100_05_080");
MsgDisp("Hiiragi","Yes, I'm looking forward to it.");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
