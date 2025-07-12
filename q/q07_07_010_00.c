BGOpen("sc811",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I walked a lot today,
So let's take a relaxing bath.)");
VoicePlay("Q070701000_22_000");
MsgDisp("Hikaru?","Mari, found you!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_TWO");
ChOpen(21,30,0,0,0,#1,#1,0,1,0,30);
ChOpen(22,30,0,0,0,#1,#1,0,2,0,30);
MsgDisp("主人公","Ah, ｛ひかる＊｝ and ｛みちる＊｝!");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,1);
VoicePlay("Q070701000_21_000");
MsgDisp("Michiru","Mari, are you going to take a bath now 
too? If so——");
VoicePlay("Q070701000_42_000");
MsgDisp("Male Student","Mikagecchi!
The tap is broken!");
ChMouth(21,2);
ChMotion(21,0);
ChMouth(22,2);
VoicePlay("Q070701000_07_000");
MsgDisp("Mikage","...... Oh Cmon, what are you guys doing?
Hold it down with this!");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,2);
VoicePlay("Q070701000_21_010");
MsgDisp("Michiru","......?
It's kind of noisy in the men's bath.");
MsgDisp("主人公","Yes...... I wonder what's going on.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3);
VoicePlay("Q070701000_22_010");
MsgDisp("Hikaru","Sounds fun, let's take a peek!");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
ChClose(22);
MsgDisp("主人公","Hey, ｛ひかる＊｝!");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,4);
VoicePlay("Q070701000_21_020");
MsgDisp("Michiru","Oh well......
Mari, we're going too.");
MsgDisp("主人公","Eeh∋　 ｛みちる＊｝, you too!");
MsgClose();
ScrFadeOut(0);
ChClose(21,0,0);
SEPlay("EV_SE_FOOT_RUN_KEEP_TWO",0,0.6);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
Wait(40,0);
SEPlay("EV_SE_854",1,0.3);
Wait(60,0);
VoicePlay("Q070701000_07_010");
MsgDisp("Mikage","Hold it tight∈
I'll call someone.");
Wait(20,0);
SEPlay("EV_SE_FOOT_RUN_COME_ALONE",0,1);
Wait(80,0);
MsgDisp("主人公","(Wait...... he's coming this way∋)");
SEStop("EV_SE_854",3);
SEPlay("EV_SE_740",0,0.9);
Wait(15,0);
MsgClose();
ScrFadeOut(0);
StlOpen("ev_07_13");
StlEye(7,1);
StlMouth(7,1);
BGMPlay("BGM_C07_MIKAGE_I",0.01);
ScrFadeIn(0);
MsgDisp("主人公","Wah!");
StlEyeOpenLevel(7,5,1);
StlMouth(7,0);
VoicePlay("Q070701000_07_020");
MsgDisp("Mikage","Ah, everything alright?");
StlEye(7,0);
MsgDisp("主人公","Y, yes......");
VoicePlay("Q070701000_22_020");
MsgDisp("Hikaru","What, what, what??
Mikage-sensei, what's wrong?");
StlEyeOpenLevel(7,5,1);
VoicePlay("Q070701000_07_030");
MsgDisp("Mikage","They broke the shower, it's now a 
fountain. I'm going to the front desk.");
VoicePlay("Q070701000_21_030");
MsgDisp("Michiru","Mikage-sensei,
You shouldn't go outside dressed like 
that......");
StlEye(7,1);
StlMouth(7,1);
VoicePlay("Q070701000_07_040");
MsgDisp("Mikage","Oooh!");
MsgClose();
ScrFadeOut(0);
StlClose();
BGMVol(0.5,2);
BGOpen("sc811",2);
MsgClose();
ChOpen(21,30,0,0,4,#1,#1,0,1,0,30);
ChOpen(22,30,0,0,2,7,#1,0,2,0,30);
ScrFadeIn(0);
VoicePlay("Q070701000_07_050");
MsgDisp("Mikage","......My bad.
I'm holding the tap with my shirt.
Can you tell the front desk person?");
MsgDisp("主人公","Ah, yes!
I will go.");
ChEye(22,0);
ChMouth(22,2);
ChMotion(22,4);
ChEyeOpenLevel(22,7);
VoicePlay("Q070701000_22_030");
MsgDisp("Hikaru","Eeh, why us?");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,3);
VoicePlay("Q070701000_21_040");
MsgDisp("Michiru","That's good, you'll owe Mikage-sensei.
Right, Mari?");
MsgDisp("主人公","Eh?
Y, yes. We need to hurry!");
BGMStop();
MsgClose();
ScrFadeOut(0);
MsgDisp("主人公","(I can't believe  ｛御影＊＊｝ popped 
out......　haah, I was so surprised.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(21,0,0);
ChClose(22,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
Wait(40,0);
ChPrmTblAdd(7,0);
