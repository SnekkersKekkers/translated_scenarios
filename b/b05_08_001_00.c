BGOpen("wf400",1);
ChLayout(1);
MsgClose();
ChOpen(8,255,0,0,3,#1,#1,4,0);
ScrFadeIn(0);
ChMotion(8,3,1);
VoicePlay("B050800100_08_000");
MsgDisp("Shirahane","Haa...that was amazingー!
My heart is still racing.");
ChEye(8,4);
ChMouth(8,0);
ChMotion(8,0,1);
VoicePlay("B050800100_08_010");
MsgDisp("Shirahane","What about you?
Did ya enjoy it?");
MsgDisp("主人公","Yeah, I had so much fun!");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,3,1);
ChEyeOpenLevel(8,0);
VoicePlay("B050800100_08_020");
MsgDisp("Shirahane","I'm glad we did that!
After all it's not a date if we didn't
both enjoy ourselves right?");
MsgDisp("主人公","Hehe.");
ChEye(8,0);
ChMouth(8,0);
ChMotion(8,0,1);
VoicePlay("B050800100_08_030");
MsgDisp("Shirahane","Ahー...but it's this time already.
I guess we should go home soon, though...");
ChEye(8,4);
ChMouth(8,0);
ChMotion(8,2,1);
VoicePlay("B050800100_08_040");
MsgDisp("Shirahane","How about a little detour?
I don't feel like going home just yet.");
MsgDisp("主人公","Yeah, okay.");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,3,1);
ChEyeOpenLevel(8,0);
VoicePlay("B050800100_08_050");
MsgDisp("Shirahane","Yay!");
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("wf200",1);
ChEye(8,4);
ChMouth(8,0);
ChMotion(8,0);
ScrFadeIn(0);
MsgDisp("主人公","Waa...the sunset is beautiful!");
ChEye(8,4);
ChMouth(8,0);
VoicePlay("B050800100_08_060");
MsgDisp("Shirahane","Really is.
Makes me want to shout out loud...");
MsgDisp("主人公","Eh?");
MsgClose();
ScrFadeOut(0);
ChClose(8);
BGMPlay("BGM_C08_DAICHI_B",0.01);
StlOpen("ev_08_02");
StlEye(8,0);
StlMouth(8,0);
ScrFadeIn(0);
VoicePlay("B050800100_08_070");
MsgDisp("Shirahane","Today's event was incredible.
The crowd was so hyped.");
MsgDisp("主人公","Yeah, that's right.");
StlEye(8,0);
StlEyeOpenLevel(8,0,1);
StlMouth(8,1);
VoicePlay("B050800100_08_080");
MsgDisp("Shirahane","I really respect anyone who can take on a
big stage like that...It's like they live
in a different dimension?");
MsgDisp("主人公","Hehe.");
StlEye(8,2);
StlMouth(8,1);
VoicePlay("B050800100_08_090");
MsgDisp("Shirahane","I also...want to make it big.");
VoicePlay("B050800100_08_100");
MsgDisp("Shirahane","In what, I don't know though.
I just don't wanna end up a borin' guy.");
StlEye(8,1);
StlMouth(8,0);
StlEyeOpenLevel(8,5,1);
VoicePlay("B050800100_08_110");
MsgDisp("Shirahane","Actually, I heard about someone who used
to come here to image train for their
dreams. They were a former student at Hane
School.");
StlEye(8,1);
StlMouth(8,0);
VoicePlay("B050800100_08_120");
MsgDisp("Shirahane","And that person made their dream come true
and is a successful artist now.");
MsgDisp("主人公","Amazing...!");
StlEye(8,0);
StlMouth(8,0);
StlEyeOpenLevel(8,5,1);
VoicePlay("B050800100_08_130");
MsgDisp("Shirahane","Watching that huge stage today made me
curious about how that person must have
felt as a high schooler.");
StlEye(8,2);
StlMouth(8,0);
VoicePlay("B050800100_08_140");
MsgDisp("Shirahane","That's why I wanted to come today.
To the place where that dream started.");
MsgDisp("主人公","I see.");
MsgClose();
ScrFadeOut(0);
StlClose();
BGMVol(0.5,2);
BGOpen("wf200",1);
MsgClose();
ChOpen(8,255,0,3,0,0,#1,4,0);
ScrFadeIn(0);
VoicePlay("B050800100_08_150");
MsgDisp("Shirahane","Hehe...!");
MsgDisp("主人公","Hehe!
Do you think your dream will come true?");
ChEye(8,2);
ChMouth(8,0);
ChMotion(8,0,1);
VoicePlay("B050800100_08_160");
MsgDisp("Shirahane","I said it just now didn't I?
I still don't know what my big dream is.");
ChEye(8,1);
ChMouth(8,3);
ChMotion(8,3,1);
VoicePlay("B050800100_08_170");
MsgDisp("Shirahane","...But, I'm fired up now!
Thanks to that senior!");
MsgDisp("主人公","He's a wonderful senpai isn't he?");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,0,1);
ChEyeOpenLevel(8,0);
VoicePlay("B050800100_08_180");
MsgDisp("Shirahane","Yeah.
I've never met that famed senior though.");
ChEye(8,0);
ChMouth(8,3);
ChMotion(8,3,1);
VoicePlay("B050800100_08_190");
MsgDisp("Shirahane","Alright!
I don't know what it is, but I'm gonna
give it my bestー∈");
MsgDisp("主人公","(Hehe!
I wonder where ｛大地＊＊｝'s dream will
take him? ')");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChPrmTblAdd(8,0);
