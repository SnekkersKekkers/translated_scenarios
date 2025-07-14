BGOpen("ne611",0);
MsgClose();
ChOpen(3,253,1,0,3,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("B050300000_03_000");
MsgDisp("Honda","\"First Love's Path\". I actually read the
original, borrowed it from my sister. I
really related to the heroine.");
MsgDisp("主人公","Hehe, I see.
Are you looking forward to seeing it?");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
ChEyeOpenLevel(3,0);
VoicePlay("B050300000_03_010");
MsgDisp("Honda","Of course!
I wonder what it will look like on
video～!");
MsgClose();
ScrFadeOut(0);
ChClose(3);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGMPlay("BGM_C03_HONDA_I",0.01);
StlOpen("ev_03_01");
StlEye(3,3);
StlMouth(3,3);
StlEyeOpenLevel(3,5,1);
ScrFadeIn(0);
VoicePlay("B050300000_03_020");
MsgDisp("Honda","Here it is.
My favorite part.");
MsgDisp("主人公","(｛本多＊＊｝ looks really invested!)");
StlEye(3,0);
StlMouth(3,0);
VoicePlay("B050300000_03_030");
MsgDisp("Honda","\"The nostalgic sound of your footsteps as
you approach me\"——");
StlEye(3,1);
StlMouth(3,1);
VoicePlay("B050300000_03_040");
MsgDisp("Honda","Woah......");
StlEye(3,2);
StlMouth(3,2);
VoicePlay("B050300000_03_050");
MsgDisp("Honda","Wah......");
MsgDisp("主人公","(Hehe. You can tell what will happen next
in the movie just by looking at
｛本多＊＊｝'s face.)");
MsgClose();
ScrFadeOut(0);
BGMVol(0.5,2);
StlClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
BGOpen("ne600",1);
MsgClose();
ChOpen(3,253,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Hehe. ｛本多＊＊｝ looks like he had a good
time. I'm glad.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("B050300000_03_060");
MsgDisp("Honda","Totally. It was a little bit different
from what I imagined, though.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("B050300000_03_070");
MsgDisp("Honda","\"The nostalgic sound of your footsteps as
you approach me\"——, That scene really
draws you in.");
ChEye(3,0);
ChMouth(3,4);
ChMouth(3,4);
ChEyeOpenLevel(3,0);
VoicePlay("B050300000_03_080");
MsgDisp("Honda","The original story described a somber
melody that tugs at your heartstrings, so
I was imagining all kinds of music as I
read......");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,1,1);
VoicePlay("B050300000_03_090");
MsgDisp("Honda","But it was completely different than what
I expected.");
MsgDisp("主人公","Hmm, what kind of music was playing?");
ChEye(3,2);
ChMouth(3,3);
ChMotion(3,0,1);
VoicePlay("B050300000_03_100");
MsgDisp("Honda","It was my a song from my sister's favorite
idol group.
I hear it all the time at home......");
MsgDisp("主人公","Hehe. At least your sister is happy, I
guess?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,1,1);
VoicePlay("B050300000_03_110");
MsgDisp("Honda","I guess so. ——Oh, look. The CD is in
stock. I'll buy it.");
MsgDisp("主人公","Eh, ｛本多＊＊｝, I thought you didn't like
it......");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,4,1);
VoicePlay("B050300000_03_120");
MsgDisp("Honda","At first I thought \"Huh?\" but it's a good
song. Especially since we listened to it
together. We can listen to it again later!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(3);
MsgDisp("主人公","(It wasn't what he expected, but it is
still a good song......
That's ｛本多＊＊｝ rating, huh?)");
MsgClose();
ScrFadeOut(0,0);
ChPrmTblAdd(3,0);
