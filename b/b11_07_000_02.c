BGDateBeforeOpen();
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","I still haven't seen ｛Mikage＊＊｝...");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgDisp("主人公","｛Mikage＊＊｝ sure is late, huh....");
VoicePlay("B110700002_35_000");
MsgDisp("Guy?","Hmm, too weak, too weak～
I need to find a more energetic girl
okay～?");
SEPlay("EV_SE_544");
ChOpen(35,254,0,2,0,#1,#1,0,0,0,30);
VoicePlay("B110700002_35_010");
MsgDisp("Guy","Ehhh?
I found her!
Full signal, all bars!∋");
MsgDisp("主人公","Eh∋
All bars?");
ChEye(35,0);
ChMouth(35,0);
VoicePlay("B110700002_35_020");
MsgDisp("Guy","You're not getting away.
Yes, sign here.");
MsgDisp("主人公","Umm...this is troubling.
Please stop.");
ChEye(35,1);
ChMouth(35,0);
VoicePlay("B110700002_35_030");
MsgDisp("Guy","No can do! You could be an actress, a
model, anything you want!
My decades of experience guarantee it♪");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
BGMPlay("BGM_C07_MIKAGE_A",0.01);
ChPosition(35,1);
MsgClose();
ChOpen(7,253,0,1,4,#1,#1,0,2,0,30);
MsgDispSksp(1,5);
ChEye(7,1);
ChMouth(7,4);
ChMotion(7,5);
VoicePlay("B110700002_07_000");
MsgDisp("Mikage","Oi, step away from that girl.");
MsgDispSksp(0);
ChEye(35,2);
ChMouth(35,0);
VoicePlay("B110700002_35_040");
MsgDisp("Guy","Eh, what a handsome guy.
But buzz off, you're derailing things.");
MsgDispSksp(1,5);
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("B110700002_07_010");
MsgDisp("Mikage","You're the one who should get lost.
Still, what an outfit you've got on...");
MsgDispSksp(0);
ChEye(35,1);
ChMouth(35,0);
VoicePlay("B110700002_35_050");
MsgDisp("Guy","Haha, this is the gold jacket of a
successful man! Easy money, baby. Next
I'll make a fortune with this girl——");
MsgDispSksp(1,5);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("B110700002_07_020");
MsgDisp("Mikage","Come on, we're going to the police station.");
MsgDispSksp(0);
SEPlay("EV_SE_581");
MsgClose();
ChClose(7,0,15);
ChPosition(35,2);
ChClose(35,0,15);
VoicePlay("B110700002_35_060");
MsgDisp("Guy","You'll stretch my gold jacket grabbing me
like that! Wait, let's settle this
peacefully, okay? Okay?");
VoicePlay("B110700002_07_030");
MsgDisp("Mikage","Don't show your face around here again.");
VoicePlay("B110700002_35_070");
MsgDisp("Guy","Ah, yes, yes-.
I'm sorry for the inconvenience.");
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE",0,0.6);
SEWait();
MsgClose();
SEPlay("EV_SE_544");
ChOpen(7,253,4,2,0,#1,#1,0,0);
VoicePlay("B110700002_07_040");
MsgDisp("Mikage","Haa...guys like that make me sad.
Even he was a high schooler once, y'know.");
MsgDisp("主人公","Yeah...
It's kinda sad, actually.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,5);
VoicePlay("B110700002_07_050");
MsgDisp("Mikage","Sorry, it's my fault for being late.
Let's shake it off and get going.");
BGMStop();
