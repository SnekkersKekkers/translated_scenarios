BGOpen("sc510",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Yay, it's lunch time!
What shall I do?
... Ah, it's ｛柊＊＊＊｝. )");
MsgClose();
SEPlay("EV_SE_544");
ChOpen(5,254,0,0,4,#1,#1,0,0);
VoiceEVSPlay(5);
VoicePlay("G110500400_05_000");
MsgDisp("Hiiragi","｛主人公｝, are you by yourself
today?");
MsgDisp("主人公","Yes?
What about ｛柊＊＊＊｝?");
ChEye(5,4);
ChMotion(5,4);
VoicePlay("G110500400_05_010");
MsgDisp("Hiiragi","I'm going to get materials from the staff
room, then afterwards I'm going to the
student council room.");
MsgDisp("主人公","Then you can't rest.
I'll help.");
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0,0,30);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc609",0);
BGMPlay("BGM_C05_HIIRAGI_B",0.01);
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0,1);
ScrFadeIn(0);
VoicePlay("G110500400_05_020");
MsgDisp("Hiiragi","Thank you for helping me.");
MsgDisp("主人公","｛柊＊＊＊｝ is still working?");
MsgClose();
ScrFadeOut(0,0,30);
ChClose(5,0,0);
SEPlay("EV_SE_713",0,0.8);
SEWait();
SEPlay("EV_SE_596",0,0.5);
SEWait();
BGOpen("ev005",0);
MsgClose();
ChOpen(5,100,0,0,1,#1,#1,0,0);
SEPlay("EV_SE_712");
ScrFadeIn(0);
VoicePlay("G110500400_05_030");
MsgDisp("Hiiragi","Yes. It's really just a hobby. I'm bad
with computers but I still like it.");
MsgDisp("主人公","Hehe, don't overwork yourself.");
ChEye(5,1);
ChMouth(5,1);
ChMotion(5,1);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,12);
SEStop("EV_SE_712",0);
VoicePlay("G110500400_05_040");
MsgDisp("Hiiragi","You too. ...Or, so I'd like to say. But I
don't think there's any need to worry.");
MsgDisp("主人公","Eh?");
ChEye(5,0);
ChMouth(5,1);
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,#1);
SEPlay("EV_SE_712");
VoicePlay("G110500400_05_050");
MsgDisp("Hiiragi","Because, when I see you, you're calmly
facing the canvas. Or happily hanging out
with the Hanatsubakis──");
VoicePlay("G110500400_05_060");
MsgDisp("Hiiragi","You're good at going in between your own
world and the world outside.");
SEStop("EV_SE_712",0);
ChEye(5,1);
ChMouth(5,1);
ChMotion(5,1);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,12);
VoicePlay("G110500400_05_070");
MsgDisp("Hiiragi","That's a great thing.
I easily lose track of what's outside.");
MsgDisp("主人公","Though... My paintings and
｛柊＊＊＊｝ 's work can't just
be lumped in as the same?");
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,#1);
VoicePlay("G110500400_05_080");
MsgDisp("Hiiragi","And just like that, you're concerned for
my welfare again.");
ChEye(5,0);
ChMouth(5,1);
ChMotion(5,0);
SEPlay("EV_SE_712");
VoicePlay("G110500400_05_090");
MsgDisp("Hiiragi","It's quite difficult to simultaneously
devote yourself to art and consider those
around you.");
MsgDisp("主人公","｛柊＊＊＊｝, thank you.
But, when you say that...");
ChEye(5,1);
ChMouth(5,1);
ChMotion(5,1);
SEStop("EV_SE_712",0);
VoicePlay("G110500400_05_100");
MsgDisp("Hiiragi","Haha, maybe I praised you a bit much?");
MsgDisp("主人公","Yeah...but, I'm happy.");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
