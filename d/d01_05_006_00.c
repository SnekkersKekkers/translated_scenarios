BGOpen("sc102",0);
ScrFadeIn(0);
VoicePlay("D010500600_05_000");
MsgDisp("Hiiragi?","Good Morning!");
VoicePlay("D010500600_40_000");
MsgDisp("Male Student","Cheese.");
VoicePlay("D010500600_05_010");
MsgDisp("Hiiragi?","\"Cheese\"?
That's an interesting greeting?");
VoicePlay("D010500600_40_010");
MsgDisp("Male Student","Since we've been cleaning up all morning,
I thought it would be better to say hello
in a more fun way.");
VoicePlay("D010500600_05_020");
MsgDisp("Hiiragi?","Oh I see, that makes sense.");
MsgDisp("主人公","Ah, it's ｛柊＊＊＊｝.
Good Morning.");
MsgClose();
ScrFadeOut(0,0);
BGMPlay("BGM_C05_HIIRAGI_B",0.01);
EfctOpen(9);
StlOpen("ev_05_07");
StlEye(5,0);
StlMouth(5,0);
ScrFadeIn(0);
VoiceEVSPlay(5);
VoicePlay("D010500600_05_030");
MsgDisp("Hiiragi","｛主人公｝, cheese.");
MsgDisp("主人公","Hehe, that's an interesting way to say
hello.");
StlEyeOpenLevel(5,5);
StlMouth(5,1);
VoicePlay("D010500600_05_040");
MsgDisp("Hiiragi","Yes, I'm grateful I get to see your
smiling first thing this morning.");
StlEye(5,1);
VoicePlay("D010500600_05_050");
MsgDisp("Hiiragi","I learned something good.");
StlEye(5,0);
MsgDisp("主人公","Thanks for your hard work on cleaning duty
this morning.");
StlEyeOpenLevel(5,5);
VoicePlay("D010500600_05_060");
MsgDisp("Hiiragi","It's my turn this week. But I love
cleaning, so watching you smile thanks to
this greeting is double the reward.");
StlEyeOpenLevel(5,#1);
StlMouth(5,0);
VoicePlay("D010500600_05_070");
MsgDisp("Hiiragi","Oh, right.
Can I ask you a question?");
MsgDisp("主人公","Sure, what is it?");
StlEye(5,1);
StlEyeOpenLevel(5,5,1);
VoicePlay("D010500600_05_080");
MsgDisp("Hiiragi","Sometimes people see me and go \"Rerere\" Do
you know what that means?");
StlEye(5,0);
MsgDisp("主人公","Rerere?
I wonder...");
StlEye(5,2);
StlMouth(5,1);
VoicePlay("D010500600_05_090");
MsgDisp("Hiiragi","I wonder what that means.
Well it seems like they're having fun, so
I guess it's a good thing.");
StlEye(5,0);
VoicePlay("D010500600_05_100");
MsgDisp("Hiiragi","Alright then.
Look, when I slack off, more leaves fall
in the blink of an eye.");
MsgDisp("主人公","Hehe, good luck.");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
StlClose();
EfctClose();
BGOpen("ex990",0);
BGOpen("sc102",0);
ScrFadeIn(0);
MsgDisp("主人公","(｛柊＊＊＊｝ likes cleaning, huh...
I wonder what \"Rerere\" means though?)");
MsgClose();
ScrFadeOut(0,0);
ChPrmTblAdd(5,0);
