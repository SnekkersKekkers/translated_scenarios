ScrFadeIn(0);
VoicePlay("P840300004_48_000");
MsgDisp("School Girl","Excuse me,
I found a lost meal ticket.");
MsgDisp("主人公","Ah, thank you very much.
Please write an entry of where 
you found it in this lost items notebook.");
VoicePlay("P840300004_48_010");
MsgDisp("School Girl","Yes.");
MsgClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(3,254,2,2,4,-1,-1,0,0);
VoicePlay("P840300004_03_000");
MsgDisp("Honda","Haa, I can't find my meal ticket...");
MsgDisp("主人公","Ah, ｛本多＊＊｝.
Just now, someoene returned it!");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,5,1);
VoicePlay("P840300004_03_010");
MsgDisp("Honda","Really!");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,4,1);
VoicePlay("P840300004_03_020");
MsgDisp("Honda","But I don't 
even know if that meal ticket is mine....
I can't take it.");
MsgDisp("主人公","This is a lost items notebook.");
SEPlay("EV_SE_687");
SEWait();
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("P840300004_03_030");
MsgDisp("Honda","Umm... the place it was found; \"dropped by
Honda Iku-kun in the corridor?\"");
MsgDisp("主人公","Yeah, they chased after you immediately, 
but it seems like ｛本多＊＊｝ was
quite quickly nowhere to be found.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,4,1);
VoicePlay("P840300004_03_040");
MsgDisp("Honda","Ummm, then this is mine?");
MsgDisp("主人公","The person who found it said so,
so it can't be wrong.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("P840300004_03_050");
MsgDisp("Honda","Yay!
I'll exchange it for takoyaki right away.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,1,1);
ChEyeOpenLevel(3,0);
VoicePlay("P840300004_03_060");
MsgDisp("Honda","This is thanks to you 
and the person who picked it up!
Thank you!");
MsgDisp("主人公","(I'm glad I made that lost items notebook.
I'm glad I was able to help everyone,
even if it was just a little.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
