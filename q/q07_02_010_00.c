MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc801",0);
ScrFadeIn(0);
VoicePlay("Q070201000_48_000");
MsgDisp("Tour Guide","We'll make a toilet break here for 15
minutes. Oh...just in time, the sunset
over the bay is beautiful!");
VoicePlay("Q070201000_38_000");
MsgDisp("Students","Yessss.");
VoicePlay("Q070201000_44_000");
MsgDisp("School Girl A","Oh wow, the sunset is beautiful!");
VoicePlay("Q070201000_45_000");
MsgDisp("School Girl B","Hey, hey, let's take a picture!");
MsgDisp("主人公","(Guess I'll go take a look too.)");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
Wait(40,0);
VoicePlay("Q070201000_02_000");
MsgDisp("Sassa?","Hey, over here∈");
MsgDisp("主人公","Eh?
Ah...
｛颯砂＊＊｝!");
MsgClose();
EnvAutoSet(0);
EnvPlay("SE_ENV_BG_AD006_CO1",0,0.9);
BGMPlay("BGM_C02_SASSA_C",0.01);
StlOpen("ev_02_14");
StlEye(2,2);
StlMouth(2,1);
ScrFadeIn(0);
VoicePlay("Q070201000_02_010");
MsgDisp("Sassa","This place is great.
What a beautiful sunset.");
StlEye(2,0);
StlMouth(2,1);
VoicePlay("Q070201000_02_020");
MsgDisp("Sassa","You can see the sunset perfectly from
here.");
MsgDisp("主人公","It's really beautiful...");
StlEye(2,2);
StlMouth(2,1);
VoicePlay("Q070201000_02_030");
MsgDisp("Sassa","Look, this is a glass ball from Nagasaki
Glass.");
StlNear(1,0,30);
StlEye(2,1);
StlMouth(2,1);
MsgDisp("主人公","Wow, how shiny.");
StlEye(2,1);
StlMouth(2,1);
VoicePlay("Q070201000_02_040");
MsgDisp("Sassa","It's great, isn't it?
Here, try holding it.");
StlEye(2,1);
StlMouth(2,1);
StlBG(1,1,30);
Wait(30);
StlNear(0,0,30);
MsgDisp("主人公","Sure.");
StlEye(2,1,0);
StlMouth(2,1);
StlEyeOpenLevel(2,5,1);
VoicePlay("Q070201000_02_050");
MsgDisp("Sassa","Wow...
It's as though we have a tiny sun in our
hands.");
MsgDisp("主人公","So pretty...");
StlEye(2,0,0);
StlMouth(2,0);
StlEyeOpenLevel(2,0,1);
VoicePlay("Q070201000_02_060");
MsgDisp("Sassa","...Yeah.
I'll never forget this moment for the rest
of my life...");
MsgDisp("主人公","Me too...");
StlEye(2,1);
StlMouth(2,1);
VoicePlay("Q070201000_02_070");
MsgDisp("Sassa","Y'know what, you can have this glass ball.");
MsgDisp("主人公","Eh...
Can I really have it?");
StlEye(2,1,0);
StlMouth(2,1);
StlEyeOpenLevel(2,5,1);
VoicePlay("Q070201000_02_080");
MsgDisp("Sassa","Yeah, it's my little sun.
Just like you.");
MsgDisp("主人公","Eh?");
StlEye(2,1);
StlMouth(2,1);
VoicePlay("Q070201000_02_090");
MsgDisp("Sassa","Is that poetic enough for me?");
MsgDisp("主人公","Hehe, yes.
Thanks, ｛颯砂＊＊｝.");
StlEye(2,2);
StlMouth(2,0);
VoicePlay("Q070201000_07_000");
MsgDisp("Mikage","Oh!
How great, you two!");
SEPlay("EV_SE_045");
MsgDisp("","(Flash)");
StlEye(2,2,0);
StlMouth(2,1);
StlEyeOpenLevel(2,5,1);
VoicePlay("Q070201000_02_100");
MsgDisp("Sassa","Ah, Mikage-sensei!");
MsgDisp("主人公","Ehh?");
VoicePlay("Q070201000_07_010");
MsgDisp("Mikage","I took a nice photo of you guys.
Look, it's time for the bus to leave!");
StlEye(2,1);
StlMouth(2,1);
VoicePlay("Q070201000_02_110");
MsgDisp("Sassa","Okay!
Let's go then!");
BGMStop(2);
MsgClose();
ScrFadeOut(0);
Wait(30,0);
MsgDisp("主人公","(｛颯砂＊＊｝...
Thank you for the pretty gift.)");
MsgClose();
EnvAutoSet(1);
StlClose();
ChPrmTblAdd(2,0);
