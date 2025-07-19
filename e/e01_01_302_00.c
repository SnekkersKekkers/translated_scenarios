BGOpen("wf210",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","...Alright.
Time to head home.");
SEPlay("EV_SE_597",0.3,0.2);
Wait(100,0);
SEPlay("EV_SE_662",0,1);
Wait(50,0);
MsgDisp("主人公","Oh!
Something just flew by...");
SEStop("EV_SE_597",2);
SEPlay("EV_SE_639");
SEWait();
MsgDisp("主人公","Tickets for rakugo?");
VoiceEVSPlay(1);
VoicePlay("E010130200_01_000");
MsgDisp("Kazama?","｛主人公｝.");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(1,255,0,0,0,#1,#1,0,0);
VoicePlay("E010130200_01_010");
MsgDisp("Kazama","What's going on?
You're standing around.");
MsgDisp("主人公","Ah, ｛風真＊＊｝!
Going out?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("E010130200_01_020");
MsgDisp("Kazama","My grandpa gave me a ticket, so I thought
I'd go see the rakugo show.");
MsgDisp("主人公","Eh.
So, that ticket...");
ChEye(1,3);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("E010130200_01_030");
MsgDisp("Kazama","What, you too∋");
MsgDisp("主人公","Nah, I picked it up earlier.
I think someone dropped it.");
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("E010130200_01_040");
MsgDisp("Kazama","Ah, right.
Felt a little bit like fate, didn't it?");
MsgDisp("主人公","Yeah, that's a crazy coincidence.
I should drop it at the police station as
soon as possible.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("E010130200_01_050");
MsgDisp("Kazama","What a crazy coincidence ...damn it.");
VoicePlay("E010130200_04_000");
MsgDisp("Nanatsumori?","Hah hah...
Where did I drop it...");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
MsgDisp("主人公","Hmm?
This voice...");
ChPosition(1,1);
MsgClose();
SEPlay("EV_SE_544");
ChNanaType(0);
ChOpen(4,255,0,2,0,#1,#1,0,2);
MsgDisp("主人公","I knew it, ｛七ツ森＊｝!
What's wrong?");
ChEye(4,2);
ChMouth(4,0);
ChMotion(4,2);
VoicePlay("E010130200_04_010");
MsgDisp("Nanatsumori","Uh-...
My ticket for the event, I seem to have
dropped it.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("E010130200_01_060");
MsgDisp("Kazama","Ah, so it's yours.");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
VoicePlay("E010130200_04_020");
MsgDisp("Nanatsumori","Yeah, this one.");
ChEyeOpenLevel(1,0);
MsgDisp("主人公","It was on the floor.
Your rakugo ticket.");
ChEye(4,5);
ChMouth(4,3);
ChMotion(4,1);
VoicePlay("E010130200_04_030");
MsgDisp("Nanatsumori","Saved!
The program is divine this time.");
MsgDisp("主人公","There you go.
Don't drop it again, alright?");
ChEye(4,0);
SEPlay("EV_SE_662");
SEWait();
MsgDisp("主人公","｛風真＊＊｝ said he's going too.
Aren't you two just brought together by
fate?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("E010130200_01_070");
MsgDisp("Kazama","This one's just a coincidence.");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
VoicePlay("E010130200_04_040");
MsgDisp("Nanatsumori","What's that?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("E010130200_01_080");
MsgDisp("Kazama","It's time to go.
See you later.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
ChClose(1,0,30);
ChEye(4,2);
ChMouth(4,0);
ChMotion(4,1);
VoicePlay("E010130200_04_050");
MsgDisp("Nanatsumori","He's ignoring me?
Well, whatever.
Catch ya later.");
MsgClose();
BGMStop();
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
ChClose(4,0,30);
MsgDisp("主人公","(Hehehe!
Wouldn't it be awesome if their seats were
right next to each other!)");
MsgClose();
ScrFadeOut(0,0);
