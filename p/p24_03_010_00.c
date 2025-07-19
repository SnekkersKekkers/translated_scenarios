BGMStop();
BGOpen("sc740",0);
MsgClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ChLayout(1);
BGMPlay("BGM_ENGEKI_C",0.01);
ScrFadeIn(0);
VoicePlay("P240301000_03_000");
MsgDisp("Honda","The set has been changed, now it's time
for the final scene, right?");
MsgDisp("主人公","Yes, this scene is great♪");
ChMouth(3,4);
VoicePlay("P240301000_34_000");
MsgDisp("Kuroda Kanbei","Ah...
I've finally returned...");
VoicePlay("P240301000_44_000");
MsgDisp("Mitsuki","After being imprisoned for so long, to see
you in this state...
Ah, how pitiable.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,1,1);
VoicePlay("P240301000_03_010");
MsgDisp("Honda","Yep yep, that's right. It's a theory that
due to being confined to a poor
environment, Kuroda Kanbei's sight had
deteriorated.");
MsgDisp("主人公","Is that right...?");
VoicePlay("P240301000_34_020");
MsgDisp("Kuroda Kanbei","It's not a dream.
Your hand...let me feel your hand...");
VoicePlay("P240301000_44_010");
MsgDisp("Mitsuki","Yes.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,1,1);
ChEyeOpenLevel(3,0);
VoicePlay("P240301000_03_020");
MsgDisp("Honda","Yep yep. With his weakened eyesight,
Kuroda Kanbei had ascertained it was
Mitsuhime by feeling her hand.");
MsgDisp("主人公","Yeah...");
VoicePlay("P240301000_34_040");
MsgDisp("Kuroda Kanbei","Yeah, this hand, it's Mitsuhime's warmth.
I have indeed returned...");
VoicePlay("P240301000_44_020");
MsgDisp("Mitsuki","I am so glad you are safe...");
MsgDisp("主人公","(Uuuuh, this is so touching...)");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("P240301000_03_030");
MsgDisp("Honda","Yes, yes. But, you know, Kuroda Kanbei's
grandfather apparently made and sold a
secret eye medicine.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("P240301000_03_040");
MsgDisp("Honda","Haha, so maybe Kuroda Kanbei used some of
that eye medicine after this?");
MsgDisp("主人公","(｛本多＊＊｝, this is such a good part...)");
VoicePlay("P240301000_34_060");
MsgDisp("Kuroda Kanbei","Indeed, it is Mitsuhime.
I have returned to you...");
BGMStop(2);
SEPlay("EV_SE_GAYA_021");
Wait(100,0);
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("P240301000_03_050");
MsgDisp("Honda","Yay!
It was a great success!");
MsgDisp("主人公","Ah, yeah.
That's right...");
SEStop("EV_SE_GAYA_021",3);
MsgDisp("主人公","(That play went well, though...
I was so distracted by ｛本多＊＊｝'s talking
I couldn't concentrate on the last scene.");
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
