MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ex000",1);
BGMPlay("BGM_C05_HIIRAGI_B",0.01);
ChLayout(1);
MsgClose();
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4,1);
ScrFadeIn(0);
MsgDisp("主人公","｛柊＊＊＊｝,
did you want to go to the park?");
ChEye(5,3);
VoicePlay("B360550100_05_000");
MsgDisp("Hiiragi","I wonder.");
ChEye(5,4);
ChMotion(5,0);
VoicePlay("B360550100_05_010");
MsgDisp("Hiiragi","I thought about it yesterday.
But when I was alone with you,
anywhere feels good.");
MsgDisp("主人公","Hehe, I see.");
ChEye(5,2);
ChMotion(5,4);
ChEyeOpenLevel(5,9);
VoicePlay("B360550100_05_020");
MsgDisp("Hiiragi","It might be disrespectful to the park
to say that anywhere is fine.
But that's honestly how I feel.");
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(12,0);
ChEye(5,4);
VoicePlay("B360550100_05_030");
MsgDisp("Hiiragi","I'm sorry to those two, but I wanted to
talk to you alone.");
MsgDisp("主人公","I see......");
ChEye(5,2);
ChEyeOpenLevel(5,0);
VoicePlay("B360550100_05_040");
MsgDisp("Hiiragi","Haa, yes......");
MsgDisp("主人公","So, what is it?");
ChEye(5,3);
ChMouth(5,2);
ChMotion(5,0,1);
VoicePlay("B360550100_05_050");
MsgDisp("Hiiragi","Eh?");
MsgDisp("主人公","Well you wanted to talk, just the
two of us, right?");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,9);
ChCheek(5,5);
VoicePlay("B360550100_05_060");
MsgDisp("Hiiragi","Oh...... that too......
Anything is fine.");
MsgDisp("主人公","Huh?");
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(12,0);
ChEye(5,4);
ChCheek(5,0);
VoicePlay("B360550100_05_070");
MsgDisp("Hiiragi","Well, since we're here,
why don't we try riding on that swing.");
MsgDisp("主人公","Hehe, yeah.
That sounds good.");
ChEye(5,3);
VoicePlay("B360550100_05_080");
MsgDisp("Hiiragi","Yeah, give me your hand.");
SEPlay("EV_SE_504");
SEWait();
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(5);
MsgDisp("主人公","(Hehe.
｛柊＊＊＊｝ is like a child today.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChOpen(5,255,7,0,0,-1,-1,0,0,0,0);
