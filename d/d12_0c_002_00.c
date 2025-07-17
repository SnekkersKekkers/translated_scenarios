BGOpen("sc510",0);
ScrFadeIn(0);
MsgDisp("主人公","(Okay, today I'll finish up some student
council work during lunch.)");
MsgClose();
ScrFadeOut(0,0);
Wait(40,0);
SEPlay("EV_SE_DOOR_019");
SEWait();
StlOpen("ev_0c_04");
StlEye(5,0);
StlMouth(5,0);
StlEye(6,0);
StlMouth(6,0);
BGMPlay("BGM_HANYOU_A",0.01);
ScrFadeIn(0);
MsgDisp("主人公","... Huh, ｛氷室＊＊｝?
What are you doing here?");
StlEye(5,1);
StlMouth(5,1);
VoicePlay("D120C00200_05_000");
MsgDisp("Hiiragi","I wanted to get Inori-kun's opinion on
this month's poster.");
StlEye(6,1,0);
StlEyeOpenLevel(6,5,1);
VoicePlay("D120C00200_06_000");
MsgDisp("Himuro","The hallways flow like a river...");
StlEye(5,2);
StlMouth(5,0);
VoicePlay("D120C00200_05_010");
MsgDisp("Hiiragi","...What do you think?");
StlEyeOpenLevel(6,0,1);
VoicePlay("D120C00200_06_010");
MsgDisp("Himuro","I know what you're trying to say, but it's
not a good slogan.");
MsgDisp("主人公","(｛氷室＊＊｝ is so blunt with his
opinions, it makes me kind of
nervous...)");
StlEyeOpenLevel(6,5,1);
VoicePlay("D120C00200_06_020");
MsgDisp("Himuro","It would be better to try to convey the
message to everyone, instead of just using
your own personal preferences.");
StlEye(5,2,0);
StlEyeOpenLevel(5,5,1);
StlMouth(5,1);
VoicePlay("D120C00200_05_020");
MsgDisp("Hiiragi","I see, that's a concise way of putting it.
Thank you for your help, Inori-kun.");
StlEyeOpenLevel(6,#1);
VoicePlay("D120C00200_06_030");
MsgDisp("Himuro","I'll come up with some ideas to help out.");
StlEyeOpenLevel(5,0,1);
Wait(6,0);
StlEyeOpenLevel(5,#1);
MsgDisp("主人公","(Phew, looks like there's no need to
worry. This is just a normal conversation.
They seem close...)");
BGMVol(0.5,2);
MsgClose();
ScrFadeOut(0,0);
StlClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEPlay("EV_SE_SCHOOL_002");
BGOpen("sc609",0);
ChLayout(1);
MsgClose();
ChOpen(5,254,0,0,4,#1,#1,0,1,0,30);
Wait(15,0);
ChOpen(6,254,0,0,0,#1,#1,0,2,0,30);
ScrFadeIn(0);
SEStop("EV_SE_SCHOOL_002",3);
VoiceEVSPlay(5);
VoicePlay("D120C00200_05_030");
MsgDisp("Hiiragi","｛主人公｝, that's the
bell.
It's time to go back to class.");
MsgDisp("主人公","Yeah. I have a few more things to do, so
why don't you go ahead? I'll lock the door
when I'm done.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0,1);
VoicePlay("D120C00200_05_040");
MsgDisp("Hiiragi","Working hard, aren't you?
We'll go first, then.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("D120C00200_06_040");
MsgDisp("Himuro","You're the same as Yanosuke-senpai.
You also have a tendency to work too hard.
Try not to overdo it.");
MsgDisp("主人公","Hehe, okay.");
MsgClose();
SEPlay("EV_SE_856");
BGMStop();
ChClose(5,0,30);
ChClose(6,0,30);
Wait(20,1);
SEPlay("EV_SE_DOOR_025");
SEWait();
MsgDisp("主人公","(Alright, let me just tidy things up and
then I'll go to class...
Ah──)");
SEPlay("EV_SE_591");
Wait(30,1);
MsgDisp("主人公","(That's the poster from earlier!
I wonder what slogan they decided on in
the end?)");
SEWait();
SEPlay("EV_SE_635");
SEWait();
MsgDisp("主人公","(Let's see, it says... \"
Don't run in the hallways∈\"...
Hehe, that's surprisingly simple?)");
MsgClose();
ScrFadeOut(0,0);
ChPrmTblAdd(5,0);
ChPrmTblAdd(6,0);
