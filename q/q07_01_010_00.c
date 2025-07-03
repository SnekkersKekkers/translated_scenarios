BGOpen("sc814",2);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_787");
SEWait();
MsgDisp("主人公","(Ah, a message.
It's from ｛風真＊＊｝......)");
MsgDisp("主人公","(\"After the lights go off, meet me in the
lobby.\"......Just that? I wonder what
he's up to......)");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(21,30,0,0,0,-1,-1,0,1,0,30);
ChOpen(22,30,0,0,3,-1,-1,0,2,0,30);
MsgDisp("主人公","Ah, ｛みちる＊｝, ｛ひかる＊｝.");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,0);
VoicePlay("Q070101000_21_000");
MsgDisp("Michiru","Mari, what's up?");
MsgDisp("主人公","Eh?
｛風真＊＊｝ sent me a message
to meet him in the lobby.");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("Q070101000_21_010");
MsgDisp("Michiru","Hehe.
Looks like you're having fun huh, 
Mari?");
ChEye(22,2);
ChMouth(22,0);
ChMotion(22,5,1);
VoicePlay("Q070101000_22_000");
MsgDisp("Hikaru","Ehh, can Hikaru come too, secretly?");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,5);
VoicePlay("Q070101000_21_020");
MsgDisp("Michiru","Hikaru, no.
Meddling in someone else's love life is 
a surefire way to get burned.");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("Q070101000_22_010");
MsgDisp("Hikaru","Okaaay.
Mari, are you ready then?");
MsgDisp("主人公","(What does she mean by ready......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(21,0,0);
ChClose(22,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc810",2);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I wonder what ｛風真＊＊｝ is up to......
If we get caught by a teacher, we'll get
punished.)");
VoiceEVSPlay(1);
VoicePlay("Q070101000_01_000");
MsgDisp("Kazama?"," ｛主人公｝.");
MsgClose();
SEPlay("EV_SE_544");
ChOpen(1,254,0,0,3,-1,-1,0,0);
MsgDisp("主人公","Ah, ｛風真＊＊｝.
What's wrong?
It's already dark outside.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("Q070101000_01_010");
MsgDisp("Kazama","You can only see the night view
at night. People say Nagasaki is top
three in night views.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("Q070101000_07_000");
MsgDisp("Mikage?","Even though I get that,
being so brazen isn't a good idea.");
ChPosition(1,1);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
SEWait();
ChOpen(7,254,0,2,0,-1,-1,0,2);
MsgDisp("主人公","Ah, Mikage sensei......");
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("Q070101000_01_020");
MsgDisp("Kazama","So you were here.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3);
VoicePlay("Q070101000_07_010");
MsgDisp("Mikage","Here I am. Vice Principal Himuro
instructed us to be on high alert.");
ChMouth(1,2);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("Q070101000_07_020");
MsgDisp("Mikage","Listen up. Vice Principal Himuro has years
and years of experience with school trips.
Your clever tricks won't work.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("Q070101000_01_030");
MsgDisp("Kazama","We were just planning to go outside.");
ChEye(7,2);
ChMouth(7,3);
ChMotion(7,2);
VoicePlay("Q070101000_07_030");
MsgDisp("Mikage","Uh...... that's ceratinly something.
But give up, and return, for your sake.");
ChEye(1,2);
ChMouth(1,0);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(7);
ChEyeOpenLevel(1,0);
ChPosition(1,0);
Wait(60,0);
MsgDisp("主人公","I wish I could have seen the
night view. Thank you anyway, ｛風真＊＊｝.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("Q070101000_01_040");
MsgDisp("Kazama","You can thank me when we've
both seen it together.
Let's go back.");
ChEye(1,0);
ChMouth(1,2);
VoicePlay("Q070101000_07_040");
MsgDisp("Mikage","Don't go to the 12th floor,
and return straight to the rooms～");
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
Wait(60,0);
VoicePlay("Q070101000_01_050");
MsgDisp("Kazama","Shh, this way.
Keep your eyes closed. Take my hand.");
SEPlay("EV_SE_504");
SEWait();
SEPlay("EV_SE_DOOR_011",0,0.9);
Wait(80,0);
SEPlay("EV_SE_084",0,0.6);
Wait(100,0);
VoicePlay("Q070101000_01_060");
MsgDisp("Kazama","Ok, now you can open your eyes.");
MsgClose();
SEStop("EV_SE_084",2);
StlOpen("ev_01_17");
StlEye(1,1);
StlMouth(1,1);
BGMPlay("BGM_C01_RYOUTA_D",0.01);
ScrFadeIn(4,120);
MsgDisp("主人公","Wow...... so beautiful∈");
StlMouth(1,0);
VoicePlay("Q070101000_01_070");
MsgDisp("Kazama","Yeah, we should thank Mikage-sensei.");
MsgDisp("主人公","Eh? Wait, you mean like, for the 12th
floor......");
StlEye(1,0);
VoicePlay("Q070101000_01_080");
MsgDisp("Kazama","Yeah.
I mean, we're together all the time.
You, me, and him.");
MsgDisp("主人公","Yeah.
But I need to thank you, ｛風真＊＊｝.
You're the one who took me here.");
StlEyeOpenLevel(1,5);
VoicePlay("Q070101000_01_090");
MsgDisp("Kazama","Thank you too.
For being with me this whole time
on the field trip.");
StlEye(1,1);
VoicePlay("Q070101000_01_100");
MsgDisp("Kazama","It was way more fun than I imagined
before high school.");
StlEye(1,0);
BGMVol(0.5,2);
MsgClose();
ScrFadeOut(3,60);
Wait(40,1);
SEPlay("EV_SE_505");
MsgDisp("","Smooch");
MsgClose();
ScrFadeIn(4,30);
MsgDisp("主人公","Eh∈
｛風真＊＊｝?");
StlEye(1,1);
StlMouth(1,1);
VoicePlay("Q070101000_01_110");
MsgDisp("Kazama","Just showing my gratitude.");
StlEye(1,0);
StlMouth(1,0);
VoicePlay("Q070101000_01_120");
MsgDisp("Kazama","If they were always fun like this, monthly
trips wouldn't be so bad.");
MsgDisp("主人公","I mean...... Isn't it not just a trip, 
but a field trip?");
StlEyeOpenLevel(1,5);
VoicePlay("Q070101000_01_130");
MsgDisp("Kazama","Both are the same. It's about looking at
the night sky together and sleeping under
the same roof.");
StlEye(1,1);
StlMouth(1,1);
VoicePlay("Q070101000_01_140");
MsgDisp("Kazama","My dream has come true.");
MsgDisp("主人公"," ｛風真＊＊｝……");
StlEye(1,0);
StlMouth(1,0);
VoicePlay("Q070101000_01_150");
MsgDisp("Kazama","Let's save the rest for next time. We have
to return, otherwise Vice Principal
Himuro will get mad at Mikage-sensei.");
MsgDisp("主人公","Ah, true.");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
StlClose();
ChPrmTblAdd(1,0);
