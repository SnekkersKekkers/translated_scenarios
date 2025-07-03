MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Yay, 
seems like it somewhat of a success!)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(1,254,0,0,3,-1,-1,0,0);
VoicePlay("P740100002_01_000");
MsgDisp("Kazama","Seems like you're satisfied?");
MsgDisp("主人公","Ah, ｛風真＊＊｝!
How was it?");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("P740100002_01_010");
MsgDisp("Kazama","When I see that smile,
I can't say bad things about it.
I'm super glad it was like a pro show.");
MsgDisp("主人公","Yay!
｛風真＊＊｝ praised me,
I'll try even harder!");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("P740100002_01_020");
MsgDisp("Kazama","Hey that's enough.");
MsgDisp("主人公","Eh?");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("P740100002_01_030");
MsgDisp("Kazama","If I know your good qualities,
then that's enough.");
MsgDisp("主人公","Ummm...");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("P740100002_01_040");
MsgDisp("Kazama","I would be troubled if you drew 
more attention with an 
even more amazing dress.");
MsgDisp("主人公","(Hehe, 
I'm happy that ｛風真＊＊｝ praised me!
I'm glad I gave it my best!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
