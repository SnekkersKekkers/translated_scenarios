BGOpen("ne000",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","...Alright.
Time to head home.");
VoiceEVSPlay(1);
VoicePlay("E010110000_01_000");
MsgDisp("Kazama?","｛主人公｝.");
MsgClose();
BGMPlay("BGM_C01_RYOUTA_A",0.01);
ChOpen(1,255,0,0,0,-1,-1,0,0);
MsgDisp("主人公","｛風真＊＊｝, what a coincidence.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,4);
ChEyeOpenLevel(1,8);
VoicePlay("E010110000_01_010");
MsgDisp("Kazama","Well, just half a coincidence.");
MsgDisp("主人公","Half?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("E010110000_01_020");
MsgDisp("Kazama","Yeah, you heading home too?");
MsgDisp("主人公","Y-yeah.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("E010110000_01_030");
MsgDisp("Kazama","To be honest, I caught a glimpse of you,
so I came searching for you.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("E010110000_01_040");
MsgDisp("Kazama","But I couldn't find you anywhere.");
MsgDisp("主人公","Ehh∋
You've been looking for me?");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("E010110000_01_050");
MsgDisp("Kazama","It's not like
I'm your fan or anything, you know.
Don't get me wrong.");
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,-1);
VoicePlay("E010110000_01_060");
MsgDisp("Kazama","I mean If you happen to see someone
you're bound to be curious, right?
So, I've been thinking about it all day
and it got me really tired.");
MsgDisp("主人公","Errr...
That's not my fault, is it?");
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("E010110000_01_070");
MsgDisp("Kazama","Yeah, I know...
But now that I got to see you,
I'm done for the day.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("E010110000_01_080");
MsgDisp("Kazama","Bye.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(1);
MsgDisp("主人公","(Does that mean he has been
looking for me all day?)");
MsgClose();
ScrFadeOut(0,0);
