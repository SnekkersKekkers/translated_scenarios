BGOpen("wf100",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChLayout(2);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ScrFadeIn(0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoiceEVSPlay(1);
VoicePlay("B330A10101_01_000");
MsgDisp("Kazama","｛主人公｝, where do you
want to go?");
MsgDisp("主人公","Eh, me?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("B330A10101_02_000");
MsgDisp("Sassa","Yeah, that's fine.
I'll join you shopping today.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B330A10101_06_000");
MsgDisp("Himuro","Yeah, I don't mind.");
MsgDisp("主人公","That...");
SEPlay("EV_SE_FOOT_WALK_AWAY_MANY");
MsgClose();
ScrFadeOut(0);
MsgClose();
ChClose(1,0,0);
ChClose(2,0,0);
ChClose(6,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("wf810",0);
ScrFadeIn(0);
MsgClose();
ChOpen(1,255,0,0,0,#1,#1,0,3,0,30);
ChOpen(2,255,4,0,0,#1,#1,0,3,0,30);
ChOpen(6,255,0,0,0,#1,#1,0,3,0,30);
VoicePlay("B330A10101_02_010");
MsgDisp("Sassa","Do you like this kind of style?");
MsgDisp("主人公","Sexy styles are becoming the trend now.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
ChEyeOpenLevel(2,7);
VoicePlay("B330A10101_02_020");
MsgDisp("Sassa","Sexy huh...");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B330A10101_01_010");
MsgDisp("Kazama","What's up, Sassa.
I think it's fine.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("B330A10101_06_010");
MsgDisp("Himuro","Right.
Nozomu-senpai, is there something wrong
with it?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("B330A10101_02_030");
MsgDisp("Sassa","Uh, it looks like it'd be easy to move
around in but...");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0,1);
VoicePlay("B330A10101_01_020");
MsgDisp("Kazama","No, you're not supposed to move around in
these sorts of clothes.
You know that much right?");
MsgDisp("主人公","Eh?
Why?");
ChMouth(1,2);
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("B330A10101_06_020");
MsgDisp("Himuro","Looks like they don't know...");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("B330A10101_02_040");
MsgDisp("Sassa","You moving around in these clothes...");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("B330A10101_01_030");
MsgDisp("Kazama","Nope.
Let's go to another store.");
MsgDisp("主人公","Eh∋
What's wrong?");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("B330A10101_01_040");
MsgDisp("Kazama","The city is filled with people like Sassa.
I can't leave you alone when you're
dressed like this.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,5);
ChCheek(2,10);
VoicePlay("B330A10101_02_050");
MsgDisp("Sassa","What do you mean by \"like\" me?
It's not something I have to be guilty
over!");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,3);
VoicePlay("B330A10101_06_030");
MsgDisp("Himuro","Nozomu-senpai, you saying that with a red
face isn't persuading us.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0,1);
ChEyeOpenLevel(1,0);
VoicePlay("B330A10101_01_050");
MsgDisp("Kazama","Exactly.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,5);
ChEyeOpenLevel(2,7);
ChCheek(2,0);
VoicePlay("B330A10101_02_060");
MsgDisp("Sassa","Exactly what?");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,1);
VoicePlay("B330A10101_06_040");
MsgDisp("Himuro","You've also got it tough huh.");
MsgDisp("主人公","(???)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,7);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,7);
ChEyeOpenLevel(2,#1);
ChMouthOpenLevel(2,#1);
ChCheek(2,0);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,7);
ChEyeOpenLevel(6,#1);
ChMouthOpenLevel(6,#1);
ChCheek(6,0);
