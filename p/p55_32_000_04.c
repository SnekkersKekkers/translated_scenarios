BGMStop();
BGOpen("sc710",0);
ScrFadeIn(0);
MsgDisp("主人公","Yay, it was a huge success∈");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(32,254,0,0,0,#1,#1,0,0);
MsgDisp("主人公","Ah, Himuro-sensei!");
ChEye(32,2);
ChMouth(32,0);
VoicePlay("P553200004_32_000");
MsgDisp("VP Himuro","That's a refreshing expression.");
MsgDisp("主人公","Yes, I enjoyed it with all my heart.");
ChEye(32,2);
ChMouth(32,0);
VoicePlay("P553200004_32_010");
MsgDisp("VP Himuro","Hm. It seems that every time we perform
game music, everyone enjoys it.");
ChEye(32,2);
ChMouth(32,0);
VoicePlay("P553200004_32_020");
MsgDisp("VP Himuro","I, as the conductor also felt the audience
smiling below me.
It was a huge success this time too.");
MsgDisp("主人公","Yes, game clear!");
ChEye(32,2);
ChMouth(32,2);
VoicePlay("P553200004_32_030");
MsgDisp("VP Himuro","Hmm... Your mood is infectious. I look
forward to your continued success!");
MsgDisp("主人公","Yes, thank you very much!");
MsgClose();
ScrFadeOut(0);
ChClose(32,0,0);
