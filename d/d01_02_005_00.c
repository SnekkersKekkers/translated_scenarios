BGOpen("sc623",0);
ChLayout(1);
BGMPlay("BGM_CLUB_IVENT",0.01);
ScrFadeIn(0);
MsgDisp("主人公","(Today is the senior's final matches.
Let's try our best so we don't have any
regrets.)");
MsgClose();
ChOpen(2,37,3,0,4,#1,#1,0,0);
VoiceEVSPlay(2);
VoicePlay("D010200500_02_000");
MsgDisp("Sassa","｛主人公｝, can I help out with
something?");
MsgDisp("主人公","No, I'm fine.
｛颯砂＊＊｝, good luck.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,1);
VoicePlay("D010200500_02_010");
MsgDisp("Sassa","I'm going to give it my all and win the
last four events.");
MsgDisp("主人公","Yup.
I believe in ｛颯砂＊＊｝!");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ChClose(2);
MsgDisp("主人公","(I hope ｛颯砂＊＊｝ has a good
race...
I'll try my best to cheer him on!)");
BGMStop();
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc625",0);
ScrFadeIn(0);
MsgDisp("主人公","｛颯砂＊＊｝!
Try your best∈");
MsgDisp("主人公","(Eh, what should I do...
｛颯砂＊＊｝ is falling behind
more and more...)");
SEStop("EV_SE_GAYA_021",2);
VoicePlay("D010200500_40_000");
MsgDisp("Manager","It doesn't matter anymore, he's out of
stamina.");
MsgDisp("主人公","Eh...?");
VoicePlay("D010200500_40_010");
MsgDisp("Manager","Didn't he set a record in the previous
high jump? That's why he doesn't have any
energy left.");
VoicePlay("D010200500_40_020");
MsgDisp("Manager","Well, the overall winner is still yet to
be decided.");
MsgDisp("主人公","｛颯砂＊＊｝...");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc628",0);
SEPlay("EV_SE_GAYA_021",1,0.5);
ScrFadeIn(0);
ChOpen(2,37,0,0,0,#1,#1,0,0);
MsgDisp("主人公","｛颯砂＊＊｝, congrats on your
victory.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("D010200500_02_020");
MsgDisp("Sassa","Yeah, thank you.");
SEStop("EV_SE_GAYA_021",5);
ChEye(2,2);
ChMouth(2,4);
ChMotion(2,2);
VoicePlay("D010200500_02_030");
MsgDisp("Sassa","But this is completely awful.
I wonder what I even practiced for.");
MsgDisp("主人公","Don't say that.
｛颯砂＊＊｝ is an octathlon
athlete, and an interhigh champion.");
ChEye(2,2);
ChMouth(2,0);
ChMotion(2,2);
VoicePlay("D010200500_02_040");
MsgDisp("Sassa","Yeah...");
ChEye(2,2);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("D010200500_02_050");
MsgDisp("Sassa","... I guess so.
Even though I won, I can't really
celebrate it with you.");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("D010200500_02_060");
MsgDisp("Sassa","Sigh...Alright. From now on the strategy
is to keep a steady pace and aim for a
high score!");
ChEye(2,0);
ChMouth(2,2);
ChMotion(2,0);
VoicePlay("D010200500_40_030");
MsgDisp("Manager","Oy, Sassa.
That doesn't sound like you.");
MsgClose();
ScrFadeOut(0);
ChClose(2,0,0);
BGMPlay("BGM_C02_SASSA_I",0.01);
StlOpen("ev_02_09");
StlEye(2,0);
StlMouth(2,0);
SEPlay("EV_SE_611");
ScrFadeIn(0);
SEWait();
StlEye(2,0);
StlMouth(2,0);
VoicePlay("D010200500_02_070");
MsgDisp("Sassa","Eh, Senpai...");
VoicePlay("D010200500_40_040");
MsgDisp("Manager","What's with that strategy?
That doesn't suit you at all.");
StlEye(2,0);
StlMouth(2,0);
StlEyeOpenLevel(2,5,1);
VoicePlay("D010200500_02_080");
MsgDisp("Sassa","But I...");
VoicePlay("D010200500_40_050");
MsgDisp("Manager","No \"buts\".
Right, Manager?");
MsgDisp("主人公","Yes!");
StlEye(2,0);
StlMouth(2,0);
VoicePlay("D010200500_02_090");
MsgDisp("Sassa","I did it without listening to your
advice...
Can you forgive me?");
VoicePlay("D010200500_40_060");
MsgDisp("Manager","You've been doing as you please and
winning consecutively since 1st year
though? Do it that way until the end.");
StlEye(2,1);
StlMouth(2,1);
VoicePlay("D010200500_02_100");
MsgDisp("Sassa","...Yes!");
VoicePlay("D010200500_40_070");
MsgDisp("Manager","Only you have what it takes to win a
complete victory in every event.");
StlEye(2,0);
StlMouth(2,1);
VoicePlay("D010200500_02_110");
MsgDisp("Sassa","Thank you so much.
I'm going to try!");
MsgClose();
BGMStop();
ScrFadeOut(0);
StlClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgDisp("主人公","(Yay...
｛颯砂＊＊｝! )");
ChPrmTblAdd(2,0);
