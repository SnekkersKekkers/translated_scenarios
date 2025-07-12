BGOpen("ho000",0);
MsgClose();
ChOpen(21,255,3,3,3,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("H6G2100000_21_000");
MsgDisp("Michiru","Mari!");
MsgDisp("主人公","Hm, what is it, ｛みちる＊｝?");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
VoicePlay("H6G2100000_21_010");
MsgDisp("Michiru","I heard you won a gold medal in the
gardening club's competition, so I came
to congratulate you.");
MsgDisp("主人公","Thank you!");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("H6G2100000_21_020");
MsgDisp("Michiru","As I expected of Mari.
You have the power to make beautiful
things shine even brighter.");
ChEye(21,4);
ChMouth(21,3);
ChMotion(21,4);
VoicePlay("H6G2100000_21_030");
MsgDisp("Michiru","Really, congratulations.
I'd love to see them next time
at school.");
MsgDisp("主人公","(Hehe, I'm so happy!
I'm glad I worked so hard
for the gardening club!)");
MsgClose();
ScrFadeOut(0,0);
