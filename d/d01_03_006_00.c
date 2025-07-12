BGOpen("ar600",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(We need to get ready to close
soon......)");
SEPlay("EV_SE_049");
Wait(5,0);
SEPlay("EV_SE_719");
Wait(15,0);
VoicePlay("D010300600_03_000");
MsgDisp("Honda?","Ahh!");
MsgDisp("主人公","Eh......
｛本多＊＊｝, are you okay∋");
MsgClose();
ChOpen(3,35,4,2,4,#1,#1,3,0);
VoicePlay("D010300600_03_010");
MsgDisp("Honda","I feel a bit weird.
My chest feels tight and warm......");
ChClose(3,0,30);
SEPlay("EV_SE_544");
ChLayout(0);
ChOpen(3,35,4,2,4,#1,#1,3,0);
MsgDisp("主人公","What's wrong?");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
ChCheek(3,8);
VoicePlay("D010300600_03_020");
MsgDisp("Honda","I wonder...... It's the same feeling as
before when I blurted out \"I like you\".");
MsgDisp("主人公","Eh......");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,1,1);
VoicePlay("D010300600_03_030");
MsgDisp("Honda","Can I hold your hand?");
SEPlay("EV_SE_504");
SEWait();
MsgDisp("主人公","S-Sure......");
MsgClose();
ScrFadeOut(0);
ChClose(3,0,0);
BGMPlay("BGM_C03_HONDA_C",0.01);
StlOpen("ev_03_12");
StlEye(3,0);
StlMouth(3,0);
StlEyeOpenLevel(3,0,1);
ScrFadeIn(0);
VoicePlay("D010300600_03_040");
MsgDisp("Honda","Phew, thank you......
It's kind of soothing.");
MsgDisp("主人公","∋
U-Uhm, ｛本多＊＊｝?");
StlEye(3,1,0);
StlMouth(3,1);
StlEyeOpenLevel(3,5,1);
VoicePlay("D010300600_03_050");
MsgDisp("Honda","Huh?　What?");
MsgDisp("主人公","We're still at work right now and
if someone were to see us——");
StlEye(3,0);
StlMouth(3,0);
VoicePlay("D010300600_03_060");
MsgDisp("Honda","∋");
MsgClose();
ScrFadeOut(0);
StlClose();
BGMVol(0.5,2);
ChOpen(3,35,0,4,4,#1,#1,8,0,0,0);
ScrFadeIn(0);
VoicePlay("D010300600_03_070");
MsgDisp("Honda","Sorry, what am I doing......");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,1,1);
VoicePlay("D010300600_03_080");
MsgDisp("Honda","Have I gone crazy?
I like you so much that I've finally
lost it?");
MsgDisp("主人公","！");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,4,1);
VoicePlay("D010300600_03_090");
MsgDisp("Honda","I never expected this kind of thing
to happen to me......");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
ChCheek(3,8);
VoicePlay("D010300600_03_100");
MsgDisp("Honda","Is this......Love?");
MsgDisp("主人公","Ehh∋");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
VoicePlay("D010300600_42_000");
MsgDisp("Manager","......Ahem.");
MsgDisp("主人公","Ah, boss......");
ChClose(3,0,30);
SEPlay("EV_SE_544");
ChLayout(1);
MsgClose();
ChOpen(3,35,4,0,4,#1,#1,0,0);
VoicePlay("D010300600_03_110");
MsgDisp("Honda","Boss, I might have finally lost
my mind.");
VoicePlay("D010300600_42_010");
MsgDisp("Manager","So it seems.");
MsgDisp("主人公","S-Sorry......");
ChEye(3,2);
ChMouth(3,4);
ChMotion(3,1,1);
VoicePlay("D010300600_03_120");
MsgDisp("Honda","Ah, I'm so sorry.");
VoicePlay("D010300600_42_020");
MsgDisp("Manager","Please.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
SEWait();
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("D010300600_03_130");
MsgDisp("Honda","I found out something interesting!");
MsgDisp("主人公","Eh?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("D010300600_03_140");
MsgDisp("Honda","You know, you are an external factor
that is gradually changing my body and
my mind. It's fascinating.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("D010300600_03_150");
MsgDisp("Honda","There are unknown things left to
discover about myself!
You're really the best!");
VoicePlay("D010300600_42_030");
MsgDisp("Manager","Honda-kun!");
ChEye(3,5);
ChMouth(3,4);
ChMotion(3,5,1);
VoicePlay("D010300600_03_160");
MsgDisp("Honda","Ah, I'm sorry!");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
BGMStop();
ChClose(3,0,30);
MsgDisp("主人公","(｛本多＊＊｝ said something very
bold...... Sigh......Now my heart is
racing.)");
MsgClose();
ScrFadeOut(0,0);
ChPrmTblAdd(3,0);
