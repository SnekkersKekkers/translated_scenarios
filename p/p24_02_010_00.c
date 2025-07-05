BGMStop();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc740",0);
BGMPlay("BGM_ENGEKI_B",0.01);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Ah, ｛颯砂＊＊｝.
It's the last scene.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("P240201000_02_000");
MsgDisp("Sassa","Finally it's the Cerebus' turn.");
MsgDisp("主人公","The doggies are so well-behaved.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("P240201000_02_010");
MsgDisp("Sassa","Yeah, they seem alright.");
MsgClose();
ScrFadeOut(0);
MsgClose();
BGOpen("sc742",0);
BGMVol(0.5,2);
ChClose(2,0,0);
ScrFadeIn(0);
VoicePlay("P240201000_33_000");
MsgDisp("Hades","Persephone, 
why won't you laugh?");
VoicePlay("P240201000_48_000");
MsgDisp("Persephone","How am I supposed to laugh when I'm
imprisoned in the depths of the earth?
Please return me to my world.");
VoicePlay("P240201000_33_020");
MsgDisp("Hades","I can't do that.");
VoicePlay("P240201000_48_010");
MsgDisp("Persephone","...Then I will cry, 
I will continue to await help.");
VoicePlay("P240201000_33_040");
MsgDisp("Hades","...That will not come true.
The gatekeeper of hell, Cerebus 
will not tolerate intruders.");
VoicePlay("P240201000_33_050");
MsgDisp("Hades","Cerebus!
...Cerebus?");
SEPlay("EV_SE_GAYA_006",0,0.4);
Wait(60,0);
MsgDisp("主人公","｛颯砂＊＊｝, what should we do?");
VoicePlay("P240201000_02_020");
MsgDisp("Sassa","Come on, give us a bark!");
SEPlay("EV_SE_679",0,0.9);
MsgDisp("","(Arf! Arf! Arf!)");
SEStop("EV_SE_GAYA_006",3);
Wait(50,0);
MsgDisp("主人公","Haa, what a relief...");
SEStop("EV_SE_679",0.5);
VoicePlay("P240201000_02_030");
MsgDisp("Sassa","Yeah, 
it wasn't very threatening though.");
MsgDisp("主人公","Hehe, yeah. Guess he wants to play with
｛颯砂＊＊｝, huh?");
VoicePlay("P240201000_48_020");
MsgDisp("Persephone","Then, I will escape myself.");
SEPlay("EV_SE_FOOT_001",0.3,0.2);
Wait(70,0);
SEStop("EV_SE_FOOT_001",1.9);
VoicePlay("P240201000_33_070");
MsgDisp("Hades","Wait!");
SEPlay("EV_SE_679",0,0.9);
MsgDisp("","(Arf! Arf! Arf!)");
Wait(70,0);
SEStop("EV_SE_679",0.2);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
VoicePlay("P240201000_49_000");
MsgDisp("Narrator","Afterwards, Persephone was drawn to Hades'
sincerity, And wished to marry the king of
the underworld.");
BGMStop();
SEPlay("EV_SE_GAYA_021");
MsgClose();
ScrFadeOut(0);
Wait(100,0);
BGOpen("sc740",0);
SEStop("EV_SE_GAYA_021",1.5);
ChOpen(2,30,3,0,3,-1,-1,0,0);
SEPlay("EV_SE_680");
ScrFadeIn(0);
Wait(80,0);
SEStop("EV_SE_680",0.2);
SEPlay("EV_SE_681");
Wait(100,0);
SEStop("EV_SE_681",0.3);
SEPlay("EV_SE_679");
MsgDisp("","(Arf! Arf! Arf!)");
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,5);
ChEyeOpenLevel(2,0);
VoicePlay("P240201000_02_040");
MsgDisp("Sassa","Yahoo!
You did well, you guys!");
SEPlay("EV_SE_681");
ChEye(2,0);
ChEyeOpenLevel(2,10);
MsgDisp("主人公","Yay, it was a great success!");
SEStop("EV_SE_681",1.5);
MsgDisp("主人公","(Yes, a win for teamwork! 
Thank you to the doggies to!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
