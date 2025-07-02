BGOpen("sc811",0);
ChLayout(1);
SEPlay("EV_SE_852",1,0.6);
ScrFadeIn(0);
MsgDisp("主人公","(Mmm, that bath felt good......)");
VoicePlay("D010500700_40_000");
MsgDisp("Male Student","You've got this, Hiiragi!
You're so good!");
MsgDisp("主人公","(Eh, ｛柊＊＊＊｝?)");
SEStop("EV_SE_852",1);
MsgClose();
ScrFadeOut(0,0);
BGMPlay("BGM_C05_HIIRAGI_B",0.01);
StlOpen("ev_05_11");
StlEye(5,0);
StlMouth(5,0);
SEPlay("EV_SE_849");
ScrFadeIn(0);
VoicePlay("D010500700_05_000");
MsgDisp("Hiiragi","I guess I've been playing table tennis
since I was little──");
SEStop("EV_SE_849",0);
SEPlay("EV_SE_850");
VoicePlay("D010500700_05_010");
MsgDisp("Hiiragi","Ra∈");
SEPlay("EV_SE_GAYA_025");
Wait(30,0);
VoicePlay("D010500700_38_000");
MsgDisp("Students","Woah, amazing!");
SEStop("EV_SE_GAYA_025",2);
VoicePlay("D010500700_40_020");
MsgDisp("Male Student","It's not over yet!
I bet you can't return this serve!
......Here!");
SEPlay("EV_SE_851",0,0.8);
Wait(30,0);
SEPlay("EV_SE_849",0.5);
Wait(20,0);
VoicePlay("D010500700_05_020");
MsgDisp("Hiiragi","Ha!");
MsgDisp("主人公","Wow......
｛柊＊＊＊｝, good luck!");
VoicePlay("D010500700_05_030");
MsgDisp("Hiiragi","Hm?");
VoicePlay("D010500700_05_040");
MsgDisp("Hiiragi","This is the end!
Here!");
SEStop("EV_SE_849",0);
SEPlay("EV_SE_850");
Wait(30,0);
SEPlay("EV_SE_049",0,1);
SEPlay("EV_SE_012",0,1);
Wait(15,0);
MsgDisp("主人公","Ahh∋");
SEPlay("EV_SE_GAYA_016");
VoicePlay("D010500700_40_030");
MsgDisp("Male Student","Ahahaha, don't just suddenly smash 
it towards the girls!");
SEStop("EV_SE_GAYA_016",1.5);
BGMVol(0.5,2);
MsgClose();
ScrFadeOut(0,0);
StlClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
BGOpen("sc811",0);
MsgClose();
ChOpen(5,30,0,2,4,0,-1,0,0);
ScrFadeIn(0);
VoicePlay("D010500700_05_050");
MsgDisp("Hiiragi","Ah, my apologies......");
MsgDisp("主人公","It's fine.
It surprised me, but I'm fine.");
ChMotion(5,0);
ChEyeOpenLevel(5,9);
VoicePlay("D010500700_05_060");
MsgDisp("Hiiragi","I was trying to show you a good side of
me......I feel like I missed a once in a 
lifetime opportunity.");
MsgDisp("主人公","Hehe.
｛柊＊＊＊｝, you're really good at table
tennis though!");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("D010500700_05_070");
MsgDisp("Hiiragi","You think so? Even if it's only table 
tennis, it's nice being complimented by 
you for sports.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("D010500700_05_080");
MsgDisp("Hiiragi","I've been playing for a long time.");
MsgDisp("主人公","Really?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("D010500700_05_090");
MsgDisp("Hiiragi","Yes. When I was on tour around the
country, I often stayed in hotels and
inns. So this was a way to have fun.");
MsgDisp("主人公","I see.
That's why you're so good at it.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("D010500700_05_100");
MsgDisp("Hiiragi","Yeah. Why don't you tag along next time?");
MsgDisp("主人公","Sure, please teach me.");
ChEye(5,3);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("D010500700_05_110");
MsgDisp("Hiiragi","Next time I'll try harder to not hit you 
in the head, okay?");
MsgDisp("主人公","Hehe, thank you.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("D010500700_05_120");
MsgDisp("Hiiragi","See you later then.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(5);
MsgDisp("主人公","(｛柊＊＊＊｝ looks like he's enjoying
the school trip?
I'm happy for him......)");
MsgClose();
ScrFadeOut(0,0);
ChPrmTblAdd(5,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
