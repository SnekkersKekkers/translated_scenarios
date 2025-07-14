BGOpen("sc210",0);
ChLayout(1);
MsgClose();
BGMPlay("BGM_C05_HIIRAGI_A",0.01);
ChOpen(5,254,0,0,4,#1,#1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(5);
VoicePlay("D100510000_05_000");
MsgDisp("Hiiragi","｛主人公｝, there you are.");
MsgDisp("主人公","｛柊＊＊＊｝, what's up?");
ChEye(5,4);
ChMotion(5,1);
VoicePlay("D100510000_05_010");
MsgDisp("Hiiragi","I don't really understand myself.
What's up, hmm?
I suddenly wanted to see your face.");
MsgDisp("主人公","Ehh?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("D100510000_05_020");
MsgDisp("Hiiragi","I guess that's weird.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("D100510000_05_030");
MsgDisp("Hiiragi","If it's fine, would you like to sit on
that bench and chat?");
MsgDisp("主人公","Hehe, sure.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
ChCheek(5,5);
VoicePlay("D100510000_05_040");
MsgDisp("Hiiragi","Sitting on the bench means I am there, at
your side......That's enough to make me
happy. Let's go.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(5);
MsgDisp("主人公","(It makes me happy too. Come to think of
it, I've been spending a lot of time with
｛柊＊＊＊｝ lately......)");
MsgClose();
ScrFadeOut(0,0);
