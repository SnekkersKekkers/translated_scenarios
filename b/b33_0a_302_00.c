BGOpen("wf600",0);
BGMPlay("BGM_PLACE_BEACH",0.01);
MsgClose();
ChClose(6,0,0);
ChClose(1,0,0);
ChClose(2,0,0);
ChLayout(1);
MsgClose();
ChOpen(2,31,3,0,4,#1,#1,0,3,0,30);
ChOpen(6,31,0,0,0,#1,#1,0,3,0,30);
ScrFadeIn(0);
MsgDisp("主人公","Huh, where's ｛風真＊＊｝...?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
ChEyeOpenLevel(2,7);
VoicePlay("B330A30200_02_000");
MsgDisp("Sassa","Trying to look cool under the parasol.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,2);
VoicePlay("B330A30200_02_010");
MsgDisp("Sassa","Oii, Ryota!
Come here.");
VoicePlay("B330A30200_01_000");
MsgDisp("Kazama","I'm good here.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("B330A30200_02_020");
MsgDisp("Sassa","You wait a second.
I'll get Inori.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("B330A30200_06_000");
MsgDisp("Himuro","Haa...you're so needy.");
MsgClose();
SEPlay("EV_SE_561");
ChClose(6,0,30);
ChClose(2,0,30);
Wait(40,0);
VoicePlay("B330A30200_01_010");
MsgDisp("Kazama","Never mind that, just leave me alone.");
VoicePlay("B330A30200_02_030");
MsgDisp("Sassa","But we came all this way as a four.");
VoicePlay("B330A30200_06_010");
MsgDisp("Himuro","Right.
But it's not like we were going for a long
swim or anything.");
MsgClose();
SEPlay("EV_SE_560");
Wait(40,0);
SEPlay("EV_SE_542");
ChCustomLayout(6,1.8,0,-0.5);
ChOpen(6,31,0,0,0,#1,#1,0,0,0,30);
ChPosition(6,3);
ChCustomLayout(1,1.8,-1.2,-0.5);
ChOpen(1,31,1,0,2,#1,#1,0,0,0,30);
ChPosition(1,3);
ChCustomLayout(2,1.8,1.2,-0.5);
ChOpen(2,31,3,0,4,#1,#1,0,0,0,30);
ChPosition(2,3);
SEWait();
MsgDisp("主人公","Hehe, we're finally a four.");
ChEyeOpenLevel(1,0);
VoicePlay("B330A30200_01_020");
MsgDisp("Kazama","Then, what are we going to do as a four?");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,1);
VoicePlay("B330A30200_06_020");
MsgDisp("Himuro","That's right...
How does bodyboarding sound?");
MsgDisp("主人公","Yeah, seems fun!");
ChEyeOpenLevel(1,8);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("B330A30200_02_040");
MsgDisp("Sassa","I want to try it.
Inori, teach us.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,1);
VoicePlay("B330A30200_06_030");
MsgDisp("Himuro","Is that fine with you too, Ryota-senpai?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("B330A30200_01_030");
MsgDisp("Kazama","Sure.");
MsgClose();
ScrFadeOut(0);
ChLayout(1);
MsgClose();
ChClose(1,0,0);
ChClose(2,0,0);
ChClose(6,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
BGOpen("wf600",1);
MsgClose();
ChOpen(6,31,0,0,0,#1,#1,0,0);
BGMVol(0.5,2);
ScrFadeIn(0);
MsgDisp("主人公","Haa...that was fun huh?");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,3);
VoicePlay("B330A30200_06_040");
MsgDisp("Himuro","I expected that of Nozomu-senpai, but you
and Ryota-senpai also have an aptitude for
it.");
VoicePlay("B330A30200_02_050");
MsgDisp("Sassa","Inori!
Look, we're going one last time!
The two of us are heading there together!");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
VoicePlay("B330A30200_06_050");
MsgDisp("Himuro","I'll watch for a bit.");
MsgClose();
SEPlay("EV_SE_531",0,0.5);
ChClose(6,0,30);
Wait(50,0);
MsgClose();
ScrFadeOut(0);
SEPlay("EV_SE_541");
Wait(30,0);
SEPlay("EV_SE_532");
Wait(70,0);
VoicePlay("B330A30200_01_040");
MsgDisp("Kazama","Yo, how was that!");
VoicePlay("B330A30200_02_060");
MsgDisp("Sassa","Alright!
That was good just now, wasn't it!");
MsgDisp("主人公","You were both amazing!");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
ChLayout(2);
MsgClose();
ChCustomLayout(6,1.8,0,-0.5);
ChOpen(6,31,0,0,0,#1,#1,0,3,0,30);
ChCustomLayout(1,1.8,-1.2,-0.5);
ChOpen(1,31,0,0,3,#1,#1,0,3,0,30);
ChCustomLayout(2,1.8,1.2,-0.5);
ChOpen(2,31,3,0,4,#1,#1,0,3,0,30);
ScrFadeIn(0);
MsgDisp("主人公","You've both improved a lot haven't you?");
ChEyeOpenLevel(1,0);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,4);
VoicePlay("B330A30200_06_060");
MsgDisp("Himuro","Ryota-senpai and Nozomu-senpai have
natural potential.
Of course, that goes for you too.");
MsgDisp("主人公","Really?
Thanks.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B330A30200_01_050");
MsgDisp("Kazama","I had fun today thanks to Inori.");
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,3);
ChEyeOpenLevel(2,0);
VoicePlay("B330A30200_02_070");
MsgDisp("Sassa","Right.
Thanks Inori-sensei.");
VoicePlay("B330A30200_01_060");
VoicePlay("B330A30200_02_080");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ChEyeOpenLevel(1,0);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
MsgDisp("Pair","Thank you very much!");
ChEyeOpenLevel(1,#1);
VoicePlay("B330A30200_06_070");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
ChCheek(6,5);
MsgDisp("Himuro","...Then, as for the tuition fee, you guys
will treat me to the next meal at the
school cafeteria.");
MsgDisp("主人公","(Hehe, that's just like ｛氷室＊＊｝.
But it was super fun.
I want to come here with everyone again!)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChClose(1,0,0);
ChClose(6,0,0);
ChClose(2,0,0);
ChLayout(2);
ChOpen(6,253,7,0,0,#1,#1,0,0,0,0);
ChPosition(6,3);
ChOpen(1,253,7,0,0,#1,#1,0,0,0,0);
ChPosition(1,3);
ChOpen(2,253,7,0,0,#1,#1,0,0,0,0);
ChPosition(2,3);
