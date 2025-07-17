BGOpen("wf000",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(...Alright. Time to head home. Huh, is
that.....)");
VoicePlay("E010220200_02_000");
MsgDisp("Sassa?","Hmmmm...
So that's the way it is, isn't it?");
VoicePlay("E010220200_04_000");
MsgDisp("Nanatsumori?","Yeah, you should use it well.");
BGMPlay("BGM_HANYOU_A",0.01);
MsgClose();
ChOpen(2,255,0,0,4,#1,#1,0,1);
ChNanaType(0);
ChOpen(4,255,0,0,0,#1,#1,0,2);
MsgDisp("主人公","｛颯砂＊＊｝,
｛七ツ森＊｝!
Going out together?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("E010220200_02_010");
MsgDisp("Sassa","Oh, we just ran into each other here.
Right?");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("E010220200_04_010");
MsgDisp("Nanatsumori","Yep. I thought I saw a guy with the same
shopping bag as me and it happened to be
Sassa.");
MsgDisp("主人公","Heh...
What a surprise, I didn't think your
interests overlapped.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,2);
VoicePlay("E010220200_02_020");
MsgDisp("Sassa","Surprised me too.
I didn't think Nanatsumori wore sports
brands.");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("E010220200_04_020");
MsgDisp("Nanatsumori","I don't have a lot of it.
But it's comfortable to wear at home, and
I can coordinate it in various ways too.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("E010220200_02_030");
MsgDisp("Sassa","Mixing and matching clothes requires the
best sense of style.
I was just asking Nanatsumori about that.");
MsgDisp("主人公","I see.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("E010220200_02_040");
MsgDisp("Sassa","Also, he's a big guy just like me,
sometimes we don't have a lot of choice.");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("E010220200_04_030");
MsgDisp("Nanatsumori","True. Sometimes you like the design, but
the size just doesn't fit. With sports
brands, that's not a problem.");
MsgDisp("主人公","You're both so tall, choosing clothes must
be difficult.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("E010220200_02_050");
MsgDisp("Sassa","Yeah, that's right.");
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,3);
ChEyeOpenLevel(2,0);
VoicePlay("E010220200_02_060");
MsgDisp("Sassa","Right, Nanatsumori!
Next time, let's swap clothes, alright?!");
ChEye(2,0);
ChEyeOpenLevel(2,10);
ChEye(4,2);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("E010220200_04_040");
MsgDisp("Nanatsumori","Uh...
I'll pass.
See ya.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(4);
ChPosition(2,0);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("E010220200_02_070");
MsgDisp("Sassa","What's with him, not in the mood?");
MsgDisp("主人公","(If they switched clothes...
Huhu, wouldn't that be interesting?)");
BGMStop();
MsgClose();
ScrFadeOut(0);
