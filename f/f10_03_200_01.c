BGOpen("sc530",0);
ScrFadeIn(0);
VoicePlay("F100320001_03_000");
MsgDisp("Honda?","The quickest solution 
is to get a haircut.");
VoicePlay("F100320001_02_000");
MsgDisp("Sassa?","Even if that were the case,
why does it have to be you, Iku, 
to be the one to cut it? ");
MsgDisp("主人公","Huh, this voice...
｛本多＊＊｝ and ｛颯砂＊＊｝?");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(3,254,0,0,0,#1,#1,0,1,0,30);
ChOpen(2,254,0,0,0,#1,#1,0,2,0,30);
VoicePlay("F100320001_02_010");
MsgDisp("Sassa","Thank goodness, please
say something to him too.");
MsgDisp("主人公","What's wrong?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("F100320001_03_010");
MsgDisp("Honda","Sakkun is fighting for every tenth of a 
second, so I thought if he cut his hair,
even with the same muscle mass as now,
he's'd be able to improve my record");
MsgDisp("主人公","Ehh?
But, it doesn't seem like ｛颯砂＊＊｝
wants to cut his hair...");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("F100320001_02_020");
MsgDisp("Sassa","No, what Iku is 
saying is right.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("F100320001_02_030");
MsgDisp("Sassa","But, I'm not going to improve my
record like that, but by training.");
ChEye(3,1);
ChMouth(3,3);
ChMotion(3,4,1);
VoicePlay("F100320001_03_020");
MsgDisp("Honda","That's right.
If you change your mind, let me know.
I cut my own hair, so I'm used to it.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("F100320001_02_040");
MsgDisp("Sassa","Got it!
Ah, you should also be careful to 
not let Iku cut your hair.");
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,3);
ChEyeOpenLevel(2,0);
VoicePlay("F100320001_02_050");
MsgDisp("Sassa","Haha, see you then.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(2);
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
ChPosition(3,1);
VoicePlay("F100320001_03_030");
MsgDisp("Honda","...Why would I cut your hair?
Right?");
MsgDisp("主人公","Y-Yeah.
Look, the afternoon bell 
is about to ring!");
BGMStop();
MsgClose();
ScrFadeOut(0);
