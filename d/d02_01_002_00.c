BGOpen("bh120",0);
ScrFadeIn(0);
MsgDisp("主人公","(Let's go say hello to ｛風真＊＊｝'s
Grandpa.)");
SEPlay("EV_SE_DOOR_018");
MsgClose();
ScrFadeOut(0,0);
Wait(40,0);
SEStop("EV_SE_DOOR_018",1);
BGOpen("bh130",0);
ScrFadeIn(0);
MsgDisp("主人公","Excuse me.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(36,254,0,0,1,#1,#1,0,0);
VoicePlay("D020100200_36_000");
MsgDisp("Ryota's Grandpa","Welcome.
...Oh, you're the reporter.");
MsgDisp("主人公","I wanted to thank you for all your help
last time. Ah, I didn't come to interview
you today...");
ChEye(36,0);
ChMouth(36,0);
VoicePlay("D020100200_36_010");
MsgDisp("Ryota's Grandpa","I'm happy you stopped by even though it's
not for work.");
ChEyeOpenLevel(36,#1);
VoicePlay("D020100200_36_020");
MsgDisp("Ryota's Grandpa","I asked Ryota to help me with bug drying.
So he's working hard in the back.");
MsgDisp("主人公","Eh, ｛風真＊＊｝ is here?");
ChEye(36,1);
ChMouth(36,0);
VoicePlay("D020100200_36_030");
MsgDisp("Ryota's Grandpa","Yes...
You're not here to see Ryota either?
That makes me even happier.");
ChEye(36,0);
MsgDisp("主人公","Hehe! Uhm...What's that thing you were
talking about, \"bug drying\"?");
ChEye(36,0);
ChMouth(36,2);
VoicePlay("D020100200_36_040");
MsgDisp("Ryota's Grandpa","Ahh, you know how we have so many books?
We dry them out with air to get rid of any
insects from the summer.");
MsgDisp("主人公","I see, you have to air the books out too.");
ChEye(36,2);
ChMouth(36,0);
VoicePlay("D020100200_36_050");
MsgDisp("Ryota's Grandpa","Yes, it requires a lot of patience and can
be quite challenging.
So it's difficult for me to do alone.");
ChEye(36,0);
ChMouth(36,0);
VoicePlay("D020100200_36_060");
MsgDisp("Ryota's Grandpa","Ryota seems to like this kind of work,
though. He does it quietly and obediently,
differently from his father.");
BGMVol(0.5,1.5);
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChPosition(36,2);
BGMPlay("BGM_C01_RYOUTA_A",0.01);
MsgClose();
ChOpen(1,255,0,4,2,#1,#1,0,1);
VoicePlay("D020100200_01_070");
MsgDisp("Kazama","Grandpa, that's enough.
Dad and I are different.");
MsgDisp("主人公","Ah, ｛風真＊＊｝.
Sorry to intrude.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,4);
ChEyeOpenLevel(1,8);
VoicePlay("D020100200_01_080");
MsgDisp("Kazama","While I was bug drying I got a weird
feeling, so I came out here to check on
things, and here you are.");
ChMotion(1,0);
MsgDisp("主人公","Geez, what do you mean by that?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("D020100200_01_090");
MsgDisp("Kazama","You guys can talk about whatever but don't
interrogate him about anything, okay?");
ChEye(36,0);
ChMouth(36,1);
VoicePlay("D020100200_36_070");
MsgDisp("Ryota's Grandpa","Do you have something you want to hide?");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("D020100200_01_110");
MsgDisp("Kazama","That's not what I mean.
There's nothing like that.");
ChEye(36,1);
ChMouth(36,0);
VoicePlay("D020100200_36_080");
MsgDisp("Ryota's Grandpa","Then it should be fine.
...Right?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
ChEye(36,0);
MsgDisp("主人公","Hehe, right.");
BGMStop();
MsgDisp("主人公","(｛風真＊＊｝ seems to have a good
relationship with his Grandpa?
He said he's different from his father...)");
MsgClose();
ScrFadeOut(0,0);
