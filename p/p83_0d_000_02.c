BGMStop();
BGOpen("sc605",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I wonder if there are any 
problems with the floor...)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_TWO");
SEWait();
ChOpen(21,254,0,0,0,-1,-1,0,1);
ChOpen(22,254,0,0,3,-1,-1,0,2);
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("P830D00002_22_000");
MsgDisp("Hikaru","Hii～ Mari♪");
ChMotion(21,3);
VoicePlay("P830D00002_21_000");
MsgDisp("Michiru","Are you doing okay with work?");
MsgDisp("主人公","Ah,｛みちる＊｝,｛ひかる＊｝.");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("P830D00002_21_010");
MsgDisp("Michiru","It's finally our last cultural festival
of high school.
What are you doing this year?");
MsgDisp("主人公","I'm in charge of the floor here.
I'll do things like dealing with
lost children.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("P830D00002_22_010");
MsgDisp("Hikaru","So cool～!
It's a job that only Mari, 
who's done it every year can do～");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,4);
VoicePlay("P830D00002_21_020");
MsgDisp("Michiru","I'll leave it to you.");
VoicePlay("P830D00002_39_000");
MsgDisp("Male Student","Excuse meー.
I brought along a lost kidー.");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("P830D00002_22_020");
MsgDisp("Hikaru","Ah, you immediately have a job?
Let's watch Mari's skills♪");
MsgClose();
ScrFadeOut(0,0);
ChClose(21,0,0);
ChClose(22,0,0);
