MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(I'm glad, 
seems like it was somewhat successful!)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(7,254,0,0,0,-1,-1,0,0);
VoicePlay("P740700000_07_000");
MsgDisp("Mikage","Good work, it's quite a big deal.
Your performance was strong.");
MsgDisp("主人公","Thank you very much. But, now at this
point my legs are trembling...");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("P740700000_07_010");
MsgDisp("Mikage","It's alright. It's proof of the fact that
you did some great work. You were able to
have a good experience.");
MsgDisp("主人公","Yes!");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("P740700000_07_020");
MsgDisp("Mikage","You'll treasure the memories you made 
today for the rest of your life.
I guarantee it.");
MsgDisp("主人公","(Yay, the show was a huge success!
I was praised by ｛御影＊＊｝,
It was worth doing my best.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
