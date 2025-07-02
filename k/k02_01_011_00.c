BGMStop();
BGOpen("ho000",2);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
ChLayout(1);
ScrFadeIn(0);
VoiceEVSPlay(1);
VoicePlay("K020101100_01_000");
MsgDisp("Kazama","｛主人公｝, do you have some more time?
I didn't mean for this to take so long.");
MsgDisp("主人公","Hm?");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("K020101100_01_010");
MsgDisp("Kazama","Happy birthday.");
MsgDisp("主人公","You remembered?");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("K020101100_01_020");
MsgDisp("Kazama","How could I forget?
You weren't worried, were you?
Maybe I should have told you sooner.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("K020101100_01_030");
MsgDisp("Kazama","Here's your present.");
SEPlay("EV_SE_665");
SEWait();
MsgDisp("主人公","Thank you.
I'm so happy!");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("K020101100_01_040");
MsgDisp("Kazama","That's good.
I was just having fun hiding the
present from you.");
MsgDisp("主人公","Hehe, so that's what it was.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("K020101100_01_050");
MsgDisp("Kazama","Aah, I should've made you happy earlier.
I feel like an idiot.");
MsgDisp("主人公","No, you're not one at all.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("K020101100_01_060");
MsgDisp("Kazama","Well, see you.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(1);
MsgDisp("主人公","(Thanks to ｛風真＊＊｝,
my birthday was great.
Thank you......!)");
MsgClose();
ScrFadeOut(0,0);
