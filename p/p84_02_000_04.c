MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc710",0);
ScrFadeIn(0);
VoicePlay("P840200004_48_000");
MsgDisp("School Girl A","Thank you very much. Thanks to you, the
scent of matcha spread through the
festival and customers came in droves!");
VoicePlay("P840200004_46_000");
MsgDisp("School Girl B","Same here. The yakisoba and okonomiyaki
stand next door had great synergy and
increased our sales!");
MsgDisp("主人公","Phew, I'm glad it all worked out...");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(2,254,3,0,4,#1,#1,0,0);
VoiceEVSPlay(2);
VoicePlay("P840200004_02_000");
MsgDisp("Sassa","Good job, ｛主人公｝.
I didn't have to do anything.");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("P840200004_02_010");
MsgDisp("Sassa","The combination of the yakisoba
stand and okonomiyaki stand made a
delicious smell. Amazing!");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("P840200004_02_020");
MsgDisp("Sassa","I would have never thought of that.");
MsgDisp("主人公","(Yay! I guess three years of hard work on
the student council is finally paying
off.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
