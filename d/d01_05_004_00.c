BGOpen("sc510",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(We're preparing for the school festival,
I'll do my best...!)");
MsgClose();
ScrFadeOut(0,0);
SEPlay("EV_SE_DOOR_019");
Wait(40,0);
StlOpen("ev_05_10");
StlEye(5,1);
StlMouth(5,0);
BGMPlay("BGM_C05_HIIRAGI_C",0.01);
SEPlay("EV_SE_724",0.8,0.5);
ScrFadeIn(0);
Wait(30,0);
VoicePlay("D010500400_42_000");
MsgDisp("Male Student A","Hiiragi, I'm begging you!
Play the lead role!");
VoicePlay("D010500400_44_000");
MsgDisp("School Girl","Yes, please!");
SEStop("EV_SE_724",1);
StlEyeOpenLevel(5,5);
VoicePlay("D010500400_05_000");
MsgDisp("Hiiragi","It would be better if one of you does it
rather than me.");
MsgDisp("主人公","(｛柊＊＊＊｝...
He turned down the lead role offer...)");
VoicePlay("D010500400_41_020");
MsgDisp("Male Student B","Why though∋
Everyone wants to see your professional
acting.");
StlEye(5,0,1);
VoicePlay("D010500400_05_010");
MsgDisp("Hiiragi","...No, I have been put in charge of making
the stage props.");
VoicePlay("D010500400_42_030");
MsgDisp("Male Student A","I can do that!");
StlEyeOpenLevel(5,5,1);
VoicePlay("D010500400_05_020");
MsgDisp("Hiiragi","...That is not possible.");
MsgDisp("主人公","｛柊＊＊＊｝, everyone is looking forward
to it. Me too, I want to see the
performance with ｛柊＊＊＊｝.");
MsgClose();
ScrFadeOut(0,0);
StlClose();
BGOpen("sc310",0);
MsgClose();
SEPlay("EV_SE_544");
ChOpen(5,254,2,2,2,9,#1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(5);
VoicePlay("D010500400_05_030");
MsgDisp("Hiiragi","｛主人公｝...
Everyone is looking forward to it...");
VoicePlay("D010500400_42_040");
MsgDisp("Male Student A","That's right.
Everyone wants to see it.");
ChEyeOpenLevel(5,7);
VoicePlay("D010500400_44_010");
MsgDisp("School Girl","Yeah!
I want to see Hiiragi's acting.");
ChEye(5,2);
ChMouth(5,2);
ChEyeOpenLevel(5,0);
VoicePlay("D010500400_05_040");
MsgDisp("Hiiragi","......");
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
BGMVol(0.5,2);
StlOpen("ev_05_10");
StlEye(5,0);
StlMouth(5,0);
SEPlay("EV_SE_724",0.3);
ScrFadeIn(0);
Wait(50,0);
VoicePlay("D010500400_42_060");
MsgDisp("Male Student A","...Haa, it's no good, huh?");
MsgDisp("主人公","｛柊＊＊＊｝...");
SEStop("EV_SE_724",1);
StlEye(5,1);
StlMouth(5,1);
VoicePlay("D010500400_05_050");
MsgDisp("Hiiragi","...Phew.
I am done with the backdrop.
Now I can do it without fear.");
MsgDisp("主人公","...Eh?");
BGMStop(2);
MsgClose();
ScrFadeOut(0,0);
StlClose();
BGOpen("sc310",0);
MsgClose();
Wait(50,0);
SEPlay("EV_SE_544",0.3);
ChOpen(5,254,0,0,4,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("D010500400_05_060");
MsgDisp("Hiiragi","Please let me play the lead role.");
MsgDisp("主人公","∈");
BGMPlay("BGM_C05_HIIRAGI_B",0.01);
SEPlay("EV_SE_GAYA_025",0,0.6);
VoicePlay("D010500400_42_070");
MsgDisp("Male Student A","Yes!
Thanks a lot, Hiiragi!");
ChEye(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("D010500400_41_080");
MsgDisp("Male Student B","This is big news.
I have to tell everyone∈");
VoicePlay("D010500400_44_020");
MsgDisp("School Girl","Awesome! We'll get to see a real Theater
Company performance at our school! That's
amazing!");
MsgDisp("主人公","Yeah...!
｛柊＊＊＊｝, thank you!");
SEStop("EV_SE_GAYA_025",1.5);
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc300",1);
BGMVol(0.5,2);
ScrFadeIn(0);
MsgDisp("主人公","｛柊＊＊＊｝, shall we pack up for today?");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
SEWait();
ChOpen(5,254,0,0,4,#1,#1,0,0);
VoicePlay("D010500400_05_070");
MsgDisp("Hiiragi","Yeah.
There is no point in continuing alone,
right?");
MsgDisp("主人公","Yup.
Everyone was really happy, though.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,2);
ChEyeOpenLevel(5,0);
VoicePlay("D010500400_05_080");
MsgDisp("Hiiragi","Yes.
Everyone being excited and happy about
it...it makes me glad.");
MsgDisp("主人公","Yeah.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("D010500400_05_090");
MsgDisp("Hiiragi","Thank you.
Why are you crying...");
MsgClose();
SEPlay("EV_SE_FOOT_039");
ChClose(5,0,30);
ChLayout(0);
MsgClose();
ChOpen(5,254,0,4,4,#1,#1,0,0,0,30);
SEWait();
Wait(5,0);
SEPlay("EV_SE_551",0.5,0.5);
MsgClose();
ScrFadeOut(0,0);
SEWait();
MsgDisp("主人公","Eh...?");
VoicePlay("D010500400_05_100");
MsgDisp("Hiiragi","...Sorry.
I've been making you worry.");
MsgDisp("主人公","｛柊＊＊＊｝...");
ChLayout(1);
BGOpen("sc300",1);
SEPlay("EV_SE_675",1,0.4)ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
Wait(25,0);
ScrFadeIn(0);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("D010500400_05_110");
MsgDisp("Hiiragi","Haa...
Thanks to you, I remembered what I had
forgotten.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("D010500400_05_120");
MsgDisp("Hiiragi","Making people happy—— I do this for that
reason alone.");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,0);
ChEyeOpenLevel(5,9);
VoicePlay("D010500400_05_130");
MsgDisp("Hiiragi","...It was a late realization, but it is
better than not realizing at all.");
MsgDisp("主人公","(｛柊＊＊＊｝...
Yeah, let's do our best together.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
ChPrmTblAdd(5,0);
ChPrmTblAdd(5,0);
