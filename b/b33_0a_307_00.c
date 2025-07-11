ChClose(1,0,0);
ChClose(2,0,0);
ChClose(6,0,0);
BGOpen("tr400",0);
ScrFadeIn(0);
Wait(40,1);
ScrFadeOut(1,0,40);
BGOpen("tr420",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(2);
ChOpen(6,255,0,0,4,-1,-1,0,3);
ChOpen(1,255,0,0,0,-1,-1,0,3);
ChOpen(2,255,0,0,4,-1,-1,0,3);
SEPlay("EV_SE_817");
ScrFadeIn(0);
Wait(30,0);
MsgDisp("主人公","Waa...that was intense, 
that speed...");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("B330A30700_06_000");
MsgDisp("Himuro","The sound of the visitors 
also adds to the production.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B330A30700_01_000");
MsgDisp("Kazama","Maybe.
IF it was all quiet,
it would feel boring.");
SEWait();
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B330A30700_06_010");
MsgDisp("Himuro","Ryota-senpai, 
you don't really like it do you?
Rollercoasters that is.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("B330A30700_01_010");
MsgDisp("Kazama","Why is that?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
VoicePlay("B330A30700_06_020");
MsgDisp("Himuro","It just felt that 
way for some reason.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("B330A30700_02_000");
MsgDisp("Sassa","You're not especially bad with
this kind of stuff are you, Ryota?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("B330A30700_01_020");
MsgDisp("Kazama","Yeah, of course. It's fine.
The oen who's scared is her.");
MsgDisp("主人公","Maybe I should sit 
this one out after all...?");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B330A30700_01_030");
MsgDisp("Kazama","It'll be fine. You're sitting 
next to me after all.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4,1);
ChEyeOpenLevel(2,7);
VoicePlay("B330A30700_02_010");
MsgDisp("Sassa","You said that so
smoothly just now.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("B330A30700_01_040");
MsgDisp("Kazama","I just feel bad 
cause she's scared?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("B330A30700_06_030");
MsgDisp("Himuro","That's what we mean,
Ryota-senpai.");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,0,1);
ChEyeOpenLevel(1,0);
VoicePlay("B330A30700_01_050");
MsgDisp("Kazama","...Understood.
Then, how should we decide on seats?");
ChMouth(1,2);
ChEyeOpenLevel(1,-1);
MsgDisp("主人公","Umm... I'll be fine by myself?
Since I might end up grabbing 
onto the clothes of the 
person next to me.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("B330A30700_01_060");
MsgDisp("Kazama","Phew...
I definitely won't lose.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
VoicePlay("B330A30700_06_040");
MsgDisp("Himuro","...Yeah, I feel the same.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,1);
VoicePlay("B330A30700_02_020");
MsgDisp("Sassa","One round to decide.");
MsgDisp("主人公","...Hm?");
MsgClose();
ScrFadeOut(0);
VoicePlay("B330A30700_01_070");
VoicePlay("B330A30700_02_030");
VoicePlay("B330A30700_06_050");
MsgDisp("Everyone","Rock-, paper, 
scissors, shoot!");
VoicePlay("B330A30700_01_080");
VoicePlay("B330A30700_02_040");
VoicePlay("B330A30700_06_060");
MsgDisp("Everyone","It's a draw!");
MsgDisp("主人公","(Umm...
It's almost our turn.)");
BGMStop();
MsgClose();
Wait(60,0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,7);
ChEyeOpenLevel(1,-1);
ChMouthOpenLevel(1,-1);
ChCheek(1,0);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,7);
ChEyeOpenLevel(2,-1);
ChMouthOpenLevel(2,-1);
ChCheek(2,0);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,7);
ChEyeOpenLevel(6,-1);
ChMouthOpenLevel(6,-1);
ChCheek(6,0);
