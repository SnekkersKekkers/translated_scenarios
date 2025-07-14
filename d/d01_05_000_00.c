MsgClose();
ScrFadeOut(0,0);
SEPlay("EV_SE_787");
SEWait();
MsgDisp("主人公","(Ah, it's from Habacha's Editorial
Department.
It says......");
MsgDisp("主人公","(\"You received permission to interview the
Habataki Theater Company\" ......Alright,
let's go!)");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("wf400",0);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_637",0,0.4);
Wait(30,0);
VoicePlay("D010500000_45_000");
MsgDisp("Woman Customer A","Yanosuke-sama was beautiful today
too.");
VoicePlay("D010500000_47_000");
MsgDisp("Woman Customer B","Yeah, he was lovely～!");
SEStop("EV_SE_637",2);
MsgDisp("主人公","(It looks like the play just finished.
｛柊＊＊＊｝ was really popular.
Now, where are the dressing rooms......?)");
MsgClose();
ScrFadeOut(0,0);
BGOpen("wf411",0);
ScrFadeIn(0);
MsgDisp("主人公","(Maybe this way......
Ugh, I'm nervous......)");
SEPlay("EV_SE_049");
ScrQuake(1);
MsgClose();
ScrFadeOut(0,0);
SEWait();
VoicePlay("D010500000_05_000");
MsgDisp("Hiiragi?","Sorry.
Are you hurt?");
MsgDisp("主人公","I'm sorry too.");
MsgClose();
BGMPlay("BGM_C05_HIIRAGI_B",0.01);
StlOpen("ev_05_13");
StlEye(5,0);
StlMouth(5,0);
ScrFadeIn(0);
VoiceEVSPlay(5);
VoicePlay("D010500000_05_010");
MsgDisp("Hiiragi","｛主人公｝. What are you doing here?");
MsgDisp("主人公","Eh......｛柊＊＊＊｝, is that you?");
StlEyeOpenLevel(5,5);
VoicePlay("D010500000_05_020");
MsgDisp("Hiiragi","Yes. We're just cleaning up the stage.");
StlMouth(5,1);
VoicePlay("D010500000_05_030");
MsgDisp("Hiiragi","And you?");
MsgDisp("主人公","Oh, me?
I'm here to do an interview for Habacha.");
StlMouth(5,0);
VoicePlay("D010500000_05_040");
MsgDisp("Hiiragi","I'm all ears.
Are you a reporter?");
MsgDisp("主人公","Yes!");
StlEyeOpenLevel(5,0);
Wait(6,0);
StlEye(5,1);
StlMouth(5,1);
VoicePlay("D010500000_05_050");
MsgDisp("Hiiragi","Haha, that's the spirit.
Wait a minute.
I'll change my clothes and come back.");
MsgDisp("主人公","Okay......!");
MsgClose();
ScrFadeOut(0,0);
StlClose();
BGMVol(0.5,2);
BGOpen("wf411",0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ScrFadeIn(0);
MsgDisp("主人公","(｛柊＊＊＊｝ as a woman looks
lovely......
He was so beautiful it made me nervous.)");
VoicePlay("D010500000_05_060");
MsgDisp("Hiiragi","Excuse me.
Sorry to keep you waiting.");
MsgDisp("主人公","It's fine, I'm sorry for disturbing 
you.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
SEWait();
ChOpen(5,255,0,0,4,#1,#1,0,0);
MsgDisp("主人公","(Ah......He's back to normal.)");
ChEye(5,0);
ChMouth(5,2);
ChMotion(5,0);
VoicePlay("D010500000_05_070");
MsgDisp("Hiiragi","Hm?
You look a bit disappointed now.");
MsgDisp("主人公","Ah, it's not like that!
......Alright, I'm sorry.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("D010500000_05_080");
MsgDisp("Hiiragi","Hahaha.
You are very honest.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("D010500000_05_090");
MsgDisp("Hiiragi","Because of that honesty, I will answer
anything you want as long as time permits.");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
Wait(40,0);
MsgDisp("主人公","(Phew......That was a good interview!
｛柊＊＊＊｝ shared a lot with me, even
though we didn't have much time.)");
MsgClose();
Wait(40,0);
ChPrmTblAdd(5,0);
