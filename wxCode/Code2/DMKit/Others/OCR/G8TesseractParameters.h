//
//  G8TesseractParameters.h
//  Tesseract OCR iOS
//  This code is auto-generated from Tesseract headers.
//
//  Created by Nikolay Volosatov on 17/12/14.
//  Copyright (c) 2014 Daniele Galiotto - www.g8production.com.
//  All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef Tesseract_OCR_iOS_G8TesseractParameters_h
#define Tesseract_OCR_iOS_G8TesseractParameters_h

///Expect spaces bigger than this
///@para Type double
///@para Default 0.33
extern NSString *const kG8ParamTospTableXhtSpRatio;

///Generate training data from boxed chars
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTesseditTrainFromBoxes;

///* blob height for initial linesize
///@para Type double
///@para Default 1.25
extern NSString *const kG8ParamTextordMinLinesize;

///Fract of xheight for wide
///@para Type double
///@para Default 0.52
extern NSString *const kG8ParamTospWideFraction;

///Use spline baseline
///@para Type BOOL
///@para Default TRUE
extern NSString *const kG8ParamTextordFixXheightBug;

///Good blob limit
///@para Type double
///@para Default -2.25
extern NSString *const kG8ParamTesseditCertaintyThreshold;

///Penalty increment
///@para Type double
///@para Default 0.01
extern NSString *const kG8ParamLanguageModelPenaltyIncrement;

///Learn both character fragments (as is done in the special low exposure mode) as well as unfragmented characters.
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamApplyboxLearnCharsAndCharFragsMode;

///Generate more boxes from boxed chars
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTesseditMakeBoxesFromBoxes;

///How wide fuzzies need context
///@para Type double
///@para Default 0.75
extern NSString *const kG8ParamTospPassWideFuzzSpToContext;

///Use pre-adapted classifier templates
///@para Type BOOL
///@para Default 0
extern NSString *const kG8ParamClassifyUsePreAdaptedTemplates;

///Split overlap adjustment
///@para Type double
///@para Default 0.9
extern NSString *const kG8ParamChopOverlapKnob;

///Extend permuter check
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamRejAlphasInNumberPerm;

///Baseline Normalized Matching
///@para Type BOOL
///@para Default 0
extern NSString *const kG8ParamTessBnMatching;

///Dont bother with word plausibility
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTesseditUnrejAnyWd;

///Dump word pass/fail chk
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamDebugAcceptableWds;

///Debug data
///@para Type INT
///@para Default 0
extern NSString *const kG8ParamTospDebugLevel;

///Use information from fragments to guide chopping process
///@para Type BOOL
///@para Default FALSE
extern NSString *const kG8ParamFragmentsGuideChopper;

///Factor to expand rows by in expand_rows
///@para Type double
///@para Default 1.0
extern NSString *const kG8ParamTextordExpansionFactor;

///Write repetition char code
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTesseditWriteRepCodes;

///Print cube debug info.
///@para Type INT
///@para Default 1
extern NSString *const kG8ParamCubeDebugLevel;

///Load unambiguous word dawg.
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamLoadUnambigDawg;

///Take segmentation and labeling from box file
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTesseditResegmentFromBoxes;

///Min # of permanent classes
///@para Type INT
///@para Default 1
extern NSString *const kG8ParamMatcherPermanentClassesMin;

///POTENTIAL crunch rating lt this
///@para Type double
///@para Default 60
extern NSString *const kG8ParamCrunchDelRating;

///Default flip
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamTospFlipFuzzKnToSp;

///Score multiplier for word matches which have good case and are frequent in the given language (lower is better).
///@para Type double
///@para Default 1.0
extern NSString *const kG8ParamSegmentPenaltyDictFrequentWord;

///Factor to bring log-probs into the same range as ratings when multiplied by outline length
///@para Type double
///@para Default 16.0
extern NSString *const kG8ParamLanguageModelNgramRatingFactor;

///rep gap multiplier for space
///@para Type double
///@para Default 1.6
extern NSString *const kG8ParamTospRepSpace;

///or should we use mean
///@para Type INT
///@para Default 3
extern NSString *const kG8ParamTospEnoughSpaceSamplesForMedian;

///Min Number of Points on Outline
///@para Type INT
///@para Default 6
extern NSString *const kG8ParamChopMinOutlinePoints;

///Max large speckle size
///@para Type double
///@para Default 0.30
extern NSString *const kG8ParamSpeckleLargeMaxSize;

///Which OCR engine(s) to run (Tesseract, Cube, both). Defaults to loading and running only Tesseract (no Cube, no combiner). (Values from OcrEngineMode enum in tesseractclass.h)
///@para Type INT
///@para Default tesseract::OEM_TESSERACT_ONLY
extern NSString *const kG8ParamTesseditOcrEngineMode;

///Output text with boxes
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTesseditCreateBoxfile;

///How many times worse certainty does a superscript position glyph need to be for us to try classifying it as a char with a different baseline?
///@para Type double
///@para Default 2.0
extern NSString *const kG8ParamSuperscriptWorseCertainty;

///Maximum size of viterbi list.
///@para Type INT
///@para Default 10
extern NSString *const kG8ParamMaxViterbiListSize;

///Good split limit
///@para Type double
///@para Default 50.0
extern NSString *const kG8ParamChopGoodSplit;

///Individual rejection control
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamRejUseTessBlanks;

///Blacklist of chars not to recognize
///@para Type STRING
///@para Default ""
extern NSString *const kG8ParamTesseditCharBlacklist;

///Min blobs before gradient counted
///@para Type INT
///@para Default 4
extern NSString *const kG8ParamTextordMinBlobsInRow;

///coord of test pt
///@para Type INT
///@para Default -MAX_INT32
extern NSString *const kG8ParamTextordTestY;

///coord of test pt
///@para Type INT
///@para Default -MAX_INT32
extern NSString *const kG8ParamTextordTestX;

///A list of user-provided patterns.
///@para Type STRING
///@para Default ""
extern NSString *const kG8ParamUserPatternsSuffix;

///Use within xht gap for wd breaks
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamTospUseXhtGaps;

///Conversion of word/line box file to char box file
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTesseditResegmentFromLineBoxes;

///Mark v.bad words for tilde crunch
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamUnlvTildeCrunching;

///SegSearch debug level
///@para Type INT
///@para Default 0
extern NSString *const kG8ParamSegsearchDebugLevel;

///Load dawg with number patterns.
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamLoadNumberDawg;

///Worst certainty for words that can be inserted into the document dictionary
///@para Type double
///@para Default -2.25
extern NSString *const kG8ParamDocDictCertaintyThreshold;

///Min blobs in each spline segment
///@para Type INT
///@para Default 8
extern NSString *const kG8ParamTextordSplineMinblobs;

///POTENTIAL crunch rating lt this
///@para Type double
///@para Default 40
extern NSString *const kG8ParamCrunchPotPoorRate;

///Test xheight algorithms
///@para Type BOOL
///@para Default FALSE
extern NSString *const kG8ParamTextordDebugXheights;

///Suspect marker level
///@para Type INT
///@para Default 99
extern NSString *const kG8ParamSuspectLevel;

///crunch garbage rating lt this
///@para Type double
///@para Default 60
extern NSString *const kG8ParamCrunchPoorGarbageRate;

///Display unsorted blobs
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTextordShowBlobs;

///Accepted variation
///@para Type double
///@para Default 0.1
extern NSString *const kG8ParamTextordXheightErrorMargin;

///Save adapted templates to a file
///@para Type BOOL
///@para Default 0
extern NSString *const kG8ParamClassifySaveAdaptedTemplates;

///Allow NN to unrej
///@para Type STRING
///@para Default "-?*\075"
extern NSString *const kG8ParamOkRepeatedChNonAlphanumWds;

///Maximum number of prunable (those for which PrunablePath() is true) entries in each viterbi list recorded in BLOB_CHOICEs
///@para Type INT
///@para Default 10
extern NSString *const kG8ParamLanguageModelViterbiListMaxNumPrunable;

///Dont crunch words with long lower case strings
///@para Type INT
///@para Default 4
extern NSString *const kG8ParamCrunchLeaveUcStrings;

///Strength of the character ngram model relative to the character classifier
///@para Type double
///@para Default 0.03
extern NSString *const kG8ParamLanguageModelNgramScaleFactor;

///xh fract width error for norm blobs
///@para Type double
///@para Default 0.4
extern NSString *const kG8ParamTextordNoiseSxfract;

///Max number of seams in seam_pile
///@para Type INT
///@para Default 150
extern NSString *const kG8ParamChopSeamPileSize;

///Perform training for ambiguities
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTesseditAmbigsTraining;

///Block stats to use fixed pitch rows?
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamTospOnlyUsePropRows;

///Print paragraph debug info.
///@para Type INT
///@para Default 0
extern NSString *const kG8ParamParagraphDebugLevel;

///good_quality_doc lte outline error limit
///@para Type double
///@para Default 1.0
extern NSString *const kG8ParamQualityOutlinePc;

///Debug level for TessdataManager functions.
///@para Type INT
///@para Default 0
extern NSString *const kG8ParamTessdataManagerDebugLevel;

///Print blamer debug messages
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamWordrecDebugBlamer;

///Rejection algorithm
///@para Type INT
///@para Default 0
extern NSString *const kG8ParamTesseditRejectMode;

///crunch rating lt this
///@para Type double
///@para Default 80.0
extern NSString *const kG8ParamCrunchTerribleRating;

///Certainty threshold for non-dict words
///@para Type double
///@para Default -2.50
extern NSString *const kG8ParamStopperNondictCertaintyBase;

///Default score multiplier for word matches, which may have case issues (lower is better).
///@para Type double
///@para Default 1.3125
extern NSString *const kG8ParamSegmentPenaltyDictCaseBad;

///Apply row rejection to good docs
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamTesseditRowRejGoodDocs;

///Display blob bounds after pre-ass
///@para Type BOOL
///@para Default FALSE
extern NSString *const kG8ParamTextordShowFinalBlobs;

///Average classifier score of a non-matching unichar
///@para Type double
///@para Default -40.0
extern NSString *const kG8ParamLanguageModelNgramNonmatchScore;

///Language model debug level
///@para Type INT
///@para Default 0
extern NSString *const kG8ParamLanguageModelDebugLevel;

///good_quality_doc gte good char limit
///@para Type double
///@para Default 1.1
extern NSString *const kG8ParamQualityRowrejPc;

///Maximum number of pain point classifications per word.
///@para Type INT
///@para Default 10
extern NSString *const kG8ParamSegsearchMaxFutileClassifications;

///Call Tess to learn blobs
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTesseditTrainingTess;

///Del if word gt xht x this below bl
///@para Type double
///@para Default 0.5
extern NSString *const kG8ParamCrunchDelLowWord;

///Penalty for inconsistent script
///@para Type double
///@para Default 0.5
extern NSString *const kG8ParamLanguageModelPenaltyScript;

///Exclude fragments that do not match any whole character with at least this certainty
///@para Type double
///@para Default -3.0
extern NSString *const kG8ParamClassifyCharacterFragmentsGarbageCertaintyThreshold;

///Class Pruner CutoffStrength:
///@para Type INT
///@para Default 7
extern NSString *const kG8ParamClassifyCpCutoffStrength;

///Only rej partially rejected words in block rejection
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamTesseditPreserveBlkRejPerfectWds;

///Aspect ratio dot/hyphen test
///@para Type double
///@para Default 1.8
extern NSString *const kG8ParamTesseditUpperFlipHyphen;

///OK split limit
///@para Type double
///@para Default 100.0
extern NSString *const kG8ParamChopOkSplit;

///For smooth factor
///@para Type INT
///@para Default 4
extern NSString *const kG8ParamTextordSkewsmoothOffset;

///Score penalty (0.1 = 10%) added if an xheight is inconsistent.
///@para Type double
///@para Default 0.25
extern NSString *const kG8ParamXheightPenaltyInconsistent;

///Chop debug
///@para Type INT
///@para Default 0
extern NSString *const kG8ParamChopDebug;

///Reject noise-like words
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamTextordNoiseRejwords;

///Debug character fragments
///@para Type INT
///@para Default 0
extern NSString *const kG8ParamFragmentsDebug;

///Dot to norm ratio for deletion
///@para Type double
///@para Default 6.0
extern NSString *const kG8ParamTextordNoiseRowratio;

///X / Y  length weight
///@para Type INT
///@para Default 3
extern NSString *const kG8ParamChopXYWeight;

///Max allowed deviation of blob top outside of font data
///@para Type INT
///@para Default 8
extern NSString *const kG8ParamXHtAcceptanceTolerance;

///Maximum number of different character choices to consider during permutation. This limit is especially useful when user patterns are specified, since overly generic patterns can result in dawg search exploring an overly large number of options.
///@para Type INT
///@para Default 10000
extern NSString *const kG8ParamMaxPermuterAttempts;

///Use sigmoidal score for certainty
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamLanguageModelUseSigmoidalCertainty;

///Force straight baselines
///@para Type BOOL
///@para Default FALSE
extern NSString *const kG8ParamTextordStraightBaselines;

///Reestimate debug
///@para Type INT
///@para Default 0
extern NSString *const kG8ParamDebugXHtLevel;

///Dont pot crunch sensible strings
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamCrunchLeaveAcceptStrings;

///Generate and print debug information for adaption
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTesseditAdaptionDebug;

///Output data to debug file
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTesseditDebugQualityMetrics;

///Only stat OBVIOUS spaces
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamTospBlockUseCertSpaces;

///Only reject tess failures
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTesseditMinimalRejection;

///Del if word ht lt xht x this
///@para Type double
///@para Default 0.7
extern NSString *const kG8ParamCrunchDelMinHt;

///gap ratio to flip sp->kern
///@para Type double
///@para Default 0.83
extern NSString *const kG8ParamTospGapFactor;

///Prevent multiple baselines
///@para Type BOOL
///@para Default TRUE
extern NSString *const kG8ParamTextordFixMakerowBug;

///Only run OCR for words that had truth recorded in BlamerBundle
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamWordrecSkipNoTruthWords;

///Height fraction to discard outlines as speckle noise
///@para Type double
///@para Default 1.0/64
extern NSString *const kG8ParamTextordNoiseHfract;

///xh fract error for norm blobs
///@para Type double
///@para Default 0.2
extern NSString *const kG8ParamTextordNoiseSyfract;

///Penalty for inconsistent spacing
///@para Type double
///@para Default 0.05
extern NSString *const kG8ParamLanguageModelPenaltySpacing;

///Debug level for sub & superscript fixer
///@para Type INT
///@para Default 0
extern NSString *const kG8ParamSuperscriptDebug;

///Don't output block information
///@para Type BOOL
///@para Default FALSE
extern NSString *const kG8ParamWordrecNoBlock;

///Lag for skew on row accumulation
///@para Type double
///@para Default 0.02
extern NSString *const kG8ParamTextordSkewLag;

///Vertical creep
///@para Type BOOL
///@para Default 0
extern NSString *const kG8ParamChopVerticalCreep;

///Min suspect level for rejecting spaces
///@para Type INT
///@para Default 100
extern NSString *const kG8ParamSuspectSpaceLevel;

///Min char x-norm scale ...
///@para Type double
///@para Default 0.0
extern NSString *const kG8ParamClassifyMinNormScaleX;

///Write .pdf output file
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTesseditCreatePdf;

///Penalty for inconsistent font
///@para Type double
///@para Default 0.00
extern NSString *const kG8ParamLanguageModelPenaltyFont;

///Page number to apply boxes from
///@para Type INT
///@para Default 0
extern NSString *const kG8ParamApplyboxPage;

///Classify debug level
///@para Type INT
///@para Default 0
extern NSString *const kG8ParamClassifyDebugLevel;

///Use only the first UTF8 step of the given string when computing log probabilities.
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamUseOnlyFirstUft8Step;

///rej good doc wd if more than this fraction rejected
///@para Type double
///@para Default 1.1
extern NSString *const kG8ParamTesseditGoodDocStillRowrejWd;

///Use DOC dawg in 11l conf. detector
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamRejTrustDocDawg;

///Only stat OBVIOUS spaces
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamTospRowUseCertSpaces1;

///No.samples reqd to reestimate for row
///@para Type INT
///@para Default 10
extern NSString *const kG8ParamTospRedoKernLimit;

///Del if word ht gt xht x this
///@para Type double
///@para Default 3.0
extern NSString *const kG8ParamCrunchDelMaxHt;

///Veto ratio between classifier ratings
///@para Type double
///@para Default 1.5
extern NSString *const kG8ParamClassifyMaxRatingRatio;

///Min cap/xheight
///@para Type double
///@para Default 1.25
extern NSString *const kG8ParamTextordAscxRatioMin;

///Output char for unidentified blobs
///@para Type STRING
///@para Default "|"
extern NSString *const kG8ParamUnrecognisedChar;

///Del if word width lt xht x this
///@para Type double
///@para Default 3.0
extern NSString *const kG8ParamCrunchDelMinWidth;

///Min difference of kn & sp in table
///@para Type double
///@para Default 2.25
extern NSString *const kG8ParamTospTableKnSpRatio;

///Min pile height to make ascheight
///@para Type double
///@para Default 0.08
extern NSString *const kG8ParamTextordAscheightModeFraction;

///A superscript scaled down more than this is unbelievably small.  For example, 0.3 means we expect the font size to be no smaller than 30% of the text line font size.
///@para Type double
///@para Default 0.4
extern NSString *const kG8ParamSuperscriptScaledownRatio;

///wide if w/h less than this
///@para Type double
///@para Default 0.0
extern NSString *const kG8ParamTospWideAspectRatio;

///Dont trust spaces less than this time kn
///@para Type double
///@para Default 1.5
extern NSString *const kG8ParamTospMinSaneKnSp;

///Fract of xheight for fuzz sp
///@para Type double
///@para Default 0.6
extern NSString *const kG8ParamTospFuzzySpaceFactor;

///Scale factor for features not used
///@para Type double
///@para Default 0.00390625
extern NSString *const kG8ParamTesseditClassMissScale;

///POTENTIAL crunch cert lt this
///@para Type double
///@para Default -10.0
extern NSString *const kG8ParamCrunchDelCert;

///Lengths of unichars in word_to_debug
///@para Type STRING
///@para Default ""
extern NSString *const kG8ParamWordToDebugLengths;

///Min pile height to make descheight
///@para Type double
///@para Default 0.08
extern NSString *const kG8ParamTextordDescheightModeFraction;

///Capture the image from the IPE
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTesseditWriteImages;

///Dont touch bad rating limit
///@para Type double
///@para Default 999.9
extern NSString *const kG8ParamSuspectRatingPerCh;

///Run in parallel where possible
///@para Type INT
///@para Default 0
extern NSString *const kG8ParamTesseditParallelize;

///Certainty to add for each dict char above small word size.
///@para Type double
///@para Default -0.50
extern NSString *const kG8ParamStopperCertaintyPerChar;

///Test for point
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTestPt;

///Words are delimited by space
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamLanguageModelNgramSpaceDelimitedLanguage;

///For adj length in rating per ch
///@para Type INT
///@para Default 10
extern NSString *const kG8ParamCrunchRatingMax;

///Penalty for inconsistent case
///@para Type double
///@para Default 0.1
extern NSString *const kG8ParamLanguageModelPenaltyCase;

///Fract of kerns reqd for isolated row stats
///@para Type double
///@para Default 0.65
extern NSString *const kG8ParamTospEnoughSmallGaps;

///Accept good rating limit
///@para Type double
///@para Default -999.9
extern NSString *const kG8ParamSuspectAcceptRating;

///Veto difference between classifier certainties
///@para Type double
///@para Default 5.5
extern NSString *const kG8ParamClassifyMaxCertaintyMargin;

///Class Pruner Multiplier 0-255:
///@para Type INT
///@para Default 15
extern NSString *const kG8ParamClassifyClassPrunerMultiplier;

///Individual rejection control
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamRejUseGoodPerm;

///Dont adapt to i/I at beginning of word
///@para Type INT
///@para Default 0
extern NSString *const kG8ParamIl1AdaptionTest;

///Min change in xht before actually trying it
///@para Type INT
///@para Default 8
extern NSString *const kG8ParamXHtMinChange;

///POTENTIAL crunch garbage
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamCrunchPotGarbage;

///Max words to keep in list
///@para Type INT
///@para Default 10
extern NSString *const kG8ParamTesseditTruncateWordchoiceLog;

///Enable adaptive classifier
///@para Type BOOL
///@para Default 1
extern NSString *const kG8ParamClassifyEnableAdaptiveMatcher;

///Write .html hOCR output file
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTesseditCreateHocr;

///Certainty scaling factor
///@para Type double
///@para Default 20.0
extern NSString *const kG8ParamCertaintyScale;

///Size of dict word to be treated as non-dict word
///@para Type INT
///@para Default 2
extern NSString *const kG8ParamStopperSmallwordSize;

///Max number of broken pieces to associate
///@para Type INT
///@para Default 4
extern NSString *const kG8ParamWordrecMaxJoinChunks;

///Dot to norm ratio for deletion
///@para Type double
///@para Default 2.0
extern NSString *const kG8ParamTextordNoiseNormratio;

///Split length adjustment
///@para Type double
///@para Default 0.5
extern NSString *const kG8ParamChopSplitDistKnob;

///Debug level for hyphenated words.
///@para Type INT
///@para Default 0
extern NSString *const kG8ParamHyphenDebugLevel;

///Write .unlv output file
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTesseditWriteUnlv;

///good_quality_doc gte good blobs limit
///@para Type double
///@para Default 0.0
extern NSString *const kG8ParamQualityBlobPc;

///super norm blobs to save row
///@para Type INT
///@para Default 1
extern NSString *const kG8ParamTextordNoiseSncount;

///Fract of xheight for fuzz sp
///@para Type double
///@para Default 0.5
extern NSString *const kG8ParamTospFuzzySpaceFactor1;

///Fract of xheight for fuzz sp
///@para Type double
///@para Default 0.72
extern NSString *const kG8ParamTospFuzzySpaceFactor2;

///Run interactively?
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamInteractiveDisplayMode;

///Fraction of size for maxima
///@para Type INT
///@para Default 10
extern NSString *const kG8ParamTextordNoiseSizefraction;

///Write block separators in output
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTesseditWriteBlockSeparators;

///Adaptation decision algorithm for tess
///@para Type INT
///@para Default 3
extern NSString *const kG8ParamTesseditTestAdaptionMode;

///Allow feature extractors to see the original outline
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamPolyAllowDetailedFx;

///Space stats use prechopping?
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTospUsePreChopping;

///narrow if w/h less than this
///@para Type double
///@para Default 0.48
extern NSString *const kG8ParamTospNarrowAspectRatio;

///Display page correlated rows
///@para Type BOOL
///@para Default FALSE
extern NSString *const kG8ParamTextordShowParallelRows;

///Percentile for small blobs
///@para Type double
///@para Default 20
extern NSString *const kG8ParamTextordBlobSizeSmallile;

///As it says
///@para Type INT
///@para Default 0
extern NSString *const kG8ParamCrunchDebug;

///Enable match debugger
///@para Type BOOL
///@para Default 0
extern NSString *const kG8ParamClassifyEnableAdaptiveDebugger;

///Crunch words with long repetitions
///@para Type INT
///@para Default 3
extern NSString *const kG8ParamCrunchLongRepetitions;

///Penalty for inconsistent character type
///@para Type double
///@para Default 0.3
extern NSString *const kG8ParamLanguageModelPenaltyChartype;

///Perfect Match (0-1)
///@para Type double
///@para Default 0.02
extern NSString *const kG8ParamMatcherPerfectThreshold;

///Penalty for words not in the frequent word dictionary
///@para Type double
///@para Default 0.1
extern NSString *const kG8ParamLanguageModelPenaltyNonFreqDictWord;

///Vigorously remove noise
///@para Type BOOL
///@para Default FALSE
extern NSString *const kG8ParamTextordHeavyNr;

///how far between kern and space?
///@para Type double
///@para Default 0
extern NSString *const kG8ParamTospThresholdBias2;

///how far between kern and space?
///@para Type double
///@para Default 0
extern NSString *const kG8ParamTospThresholdBias1;

///Force parallel baselines
///@para Type BOOL
///@para Default TRUE
extern NSString *const kG8ParamTextordParallelBaselines;

///%rej allowed before rej whole row
///@para Type double
///@para Default 40.00
extern NSString *const kG8ParamTesseditRejectRowPercent;

///Threshold for good features during adaptive 0-255
///@para Type INT
///@para Default 230
extern NSString *const kG8ParamClassifyAdaptFeatureThreshold;

///Width change adjustment
///@para Type double
///@para Default 5.0
extern NSString *const kG8ParamChopWidthChangeKnob;

///Dont reject ANYTHING AT ALL
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTesseditZeroKelvinRejection;

///Pixel size of noise
///@para Type INT
///@para Default 7
extern NSString *const kG8ParamTextordMaxNoiseSize;

///Dont autoflip kn to sp when large separation
///@para Type double
///@para Default 0.0
extern NSString *const kG8ParamTospFlipCaution;

///xcoord
///@para Type double
///@para Default 99999.99
extern NSString *const kG8ParamTestPtX;

///Reduce rejection on good docs
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamTesseditGoodQualityUnrej;

///Learning Debug Level:
///@para Type INT
///@para Default 0
extern NSString *const kG8ParamClassifyLearningDebugLevel;

///xht multiplier
///@para Type double
///@para Default -1
extern NSString *const kG8ParamTospIgnoreBigGaps;

///Load system word dawg.
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamLoadSystemDawg;

///Only stat OBVIOUS spaces
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamTospNarrowBlobsNotCert;

///Turn on/off the use of character ngram model
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamLanguageModelNgramOn;

///Try to set the blame for errors
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamWordrecRunBlamer;

///Fuzzy if less than this
///@para Type double
///@para Default 3.0
extern NSString *const kG8ParamTospTableFuzzyKnSpRatio;

///Don't remove noise blobs
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTextordNoRejects;

///Rej blbs near image edge limit
///@para Type INT
///@para Default 2
extern NSString *const kG8ParamTesseditImageBorder;

///Pass ANY flip to context?
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTospAllFlipsFuzzy;

///Contextual fixspace debug
///@para Type INT
///@para Default 0
extern NSString *const kG8ParamDebugFixSpaceLevel;

///Use dictword test
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamRej1IlUseDictWord;

///Debug row garbage detector
///@para Type BOOL
///@para Default FALSE
extern NSString *const kG8ParamTextordNoiseDebug;

///Don't use any alphabetic-specific tricks. Set to true in the traineddata config file for scripts that are cursive or inherently fixed-pitch
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamSegmentNonalphabeticScript;

///Space stats use prechopping?
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTospOldToMethod;

///Print timing stats
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTesseditTimingDebug;

///Prioritize blob division over chopping
///@para Type BOOL
///@para Default FALSE
extern NSString *const kG8ParamPrioritizeDivision;

///Add words to the document dictionary
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamTesseditEnableDocDict;

///POTENTIAL crunch cert lt this
///@para Type double
///@para Default -8.0
extern NSString *const kG8ParamCrunchPotPoorCert;

///Score multiplier for glyph fragment segmentations which do not match a dictionary word (lower is better).
///@para Type double
///@para Default 1.25
extern NSString *const kG8ParamSegmentPenaltyDictNonword;

///crunch garbage cert lt this
///@para Type double
///@para Default -9.0
extern NSString *const kG8ParamCrunchPoorGarbageCert;

///Fraction of neighbourhood
///@para Type double
///@para Default 0.4
extern NSString *const kG8ParamTextordOccupancyThreshold;

///Script has no xheight, so use a single mode for horizontal text
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTextordSingleHeightMode;

///How many potential indicators needed
///@para Type INT
///@para Default 1
extern NSString *const kG8ParamCrunchPotIndicators;

///Min size of baseline shift
///@para Type double
///@para Default 9.99
extern NSString *const kG8ParamTextordBlshiftXfraction;

///Constrain relative values of inter and intra-word gaps for old_to_method.
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTospOldToConstrainSpKn;

///Rating scaling factor
///@para Type double
///@para Default 1.5
extern NSString *const kG8ParamRatingScale;

///Fraction of line spacing for quad
///@para Type double
///@para Default 0.02
extern NSString *const kG8ParamTextordSplineShiftFraction;

///Max desc/xheight
///@para Type double
///@para Default 0.6
extern NSString *const kG8ParamTextordDescxRatioMax;

///Force all rep chars the same
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamTesseditConsistentReps;

///Dont let sp minus kn get too small
///@para Type double
///@para Default 0.2
extern NSString *const kG8ParamTospSillyKnSpGap;

///Penalty for non-dictionary words
///@para Type double
///@para Default 0.15
extern NSString *const kG8ParamLanguageModelPenaltyNonDictWord;

///Max width before chopping
///@para Type double
///@para Default 1.5
extern NSString *const kG8ParamTextordChopWidth;

///Fraction of linespace for good overlap
///@para Type double
///@para Default 0.375
extern NSString *const kG8ParamTextordOverlapX;

///Make output have exactly one word per WERD
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTesseditWordForWord;

///Segmentation adjustment debug
///@para Type INT
///@para Default 0
extern NSString *const kG8ParamSegmentAdjustDebug;

///Min pile height to make xheight
///@para Type double
///@para Default 0.4
extern NSString *const kG8ParamTextordXheightModeFraction;

///In multilingual mode use params model of the primary language
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTesseditUsePrimaryParamsModel;

///How many non-noise blbs either side?
///@para Type INT
///@para Default 1
extern NSString *const kG8ParamFixspNonNoiseLimit;

///Minimum bottom of a character measured as a multiple of x-height above the baseline for us to reconsider whether it's a superscript.
///@para Type double
///@para Default 0.3
extern NSString *const kG8ParamSuperscriptMinYBottom;

///Maximum size of viterbi lists recorded in BLOB_CHOICEs
///@para Type INT
///@para Default 500
extern NSString *const kG8ParamLanguageModelViterbiListMaxSize;

///Max width of blobs to make rows
///@para Type double
///@para Default 8
extern NSString *const kG8ParamTextordWidthLimit;

///Fraction of line spacing for outlier
///@para Type double
///@para Default 0.1
extern NSString *const kG8ParamTextordSplineOutlierFraction;

///Use within xht gap for wd breaks
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamTospStatsUseXhtGaps;

///Normalization Method   ...
///@para Type INT
///@para Default character
extern NSString *const kG8ParamClassifyNormMethod;

///Min acceptable orientation margin
///@para Type double
///@para Default 7.0
extern NSString *const kG8ParamMinOrientationMargin;

///Great Match (0-1)
///@para Type double
///@para Default 0.0
extern NSString *const kG8ParamMatcherGreatThreshold;

///Only initialize with the config file. Useful if the instance is not going to be used for OCR but say only for layout analysis.
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTesseditInitConfigOnly;

///Display rows after expanding
///@para Type BOOL
///@para Default FALSE
extern NSString *const kG8ParamTextordShowExpandedRows;

///Only rej partially rejected words in row rejection
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamTesseditPreserveRowRejPerfectWds;

///New template margin (0-1)
///@para Type double
///@para Default 0.1
extern NSString *const kG8ParamMatcherRatingMargin;

///Do not include character fragments in the results of the classifier
///@para Type BOOL
///@para Default TRUE
extern NSString *const kG8ParamDisableCharacterFragments;

///Maximum top of a character measured as a multiple of x-height above the baseline for us to reconsider whether it's a subscript.
///@para Type double
///@para Default 0.5
extern NSString *const kG8ParamSubscriptMaxYTop;

///Merge the fragments in the ratings matrix and delete them after merging
///@para Type BOOL
///@para Default TRUE
extern NSString *const kG8ParamMergeFragmentsInMatrix;

///unrej potential with no chekcs
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamBlandUnrej;

///Del if word gt xht x this above bl
///@para Type double
///@para Default 1.5
extern NSString *const kG8ParamCrunchDelHighWord;

///fraction of linesize for min xheight
///@para Type double
///@para Default 0.25
extern NSString *const kG8ParamTextordMinxh;

///Factor for defining space threshold in terms of space and kern sizes
///@para Type double
///@para Default 2.0
extern NSString *const kG8ParamTospOldSpKnThFactor;

///To avoid overly small denominators use this as the floor of the probability returned by the ngram model
///@para Type double
///@para Default 0.000001
extern NSString *const kG8ParamLanguageModelNgramSmallProb;

///Non standard number of outlines
///@para Type STRING
///@para Default "%| "
extern NSString *const kG8ParamOutlinesOdd;

///Log matcher activity
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTesseditMatcherLog;

///Stopper debug level
///@para Type INT
///@para Default 0
extern NSString *const kG8ParamStopperDebugLevel;

///Reject all bad quality wds
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamTesseditRejectBadQualWds;

///, Punct. chs expected WITHIN numbers
///@para Type STRING
///@para Default ".
extern NSString *const kG8ParamNumericPunctuation;

///Split sharpness adjustment
///@para Type double
///@para Default 0.06
extern NSString *const kG8ParamChopSharpnessKnob;

///Il1 conflict set
///@para Type STRING
///@para Default "Il1[]"
extern NSString *const kG8ParamConflictSetIL1;

///Integer Matcher Multiplier  0-255:
///@para Type INT
///@para Default 10
extern NSString *const kG8ParamClassifyIntegerMatcherMultiplier;

///Dont Suspect dict wds longer than this
///@para Type INT
///@para Default 2
extern NSString *const kG8ParamSuspectShortWords;

///Assume the input is numbers [0-9].
///@para Type BOOL
///@para Default 0
extern NSString *const kG8ParamClassifyBlnNumericMode;

///%rej allowed before rej whole block
///@para Type double
///@para Default 45.00
extern NSString *const kG8ParamTesseditRejectBlockPercent;

///Non-linear stroke-density normalization
///@para Type BOOL
///@para Default 0
extern NSString *const kG8ParamClassifyNonlinearNorm;

///Only stat OBVIOUS spaces
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamTospRowUseCertSpaces;

///Individual rejection control
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamRejUseTessAccepted;

///Maximum angle delta for prototype clustering
///@para Type double
///@para Default 0.015
extern NSString *const kG8ParamMatcherClusteringMaxAngleDelta;

///Character Normalization Range ...
///@para Type double
///@para Default 0.2
extern NSString *const kG8ParamClassifyCharNormRange;

///Run paragraph detection on the post-text-recognition (more accurate)
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamParagraphTextBased;

///Split center adjustment
///@para Type double
///@para Default 0.15
extern NSString *const kG8ParamChopCenterKnob;

///Use test xheight mechanism
///@para Type BOOL
///@para Default TRUE
extern NSString *const kG8ParamTextordNewInitialXheight;

///Fraction of x for big t count
///@para Type double
///@para Default 0.5
extern NSString *const kG8ParamTextordNoiseSizelimit;

///Penalty to apply when a non-alnum is vertically out of its expected textline position
///@para Type double
///@para Default 0.0
extern NSString *const kG8ParamClassifyMisfitJunkPenalty;

///Class str to debug learning
///@para Type STRING
///@para Default ""
extern NSString *const kG8ParamClassifyLearnDebugStr;

///Do minimal rejection on pass 1 output
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTesseditMinimalRejPass1;

///Fiddle alpha figures
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamCrunchIncludeNumerals;

///Ile of sizes for xheight guess
///@para Type double
///@para Default 0.90
extern NSString *const kG8ParamTextordInitialascIle;

///Filename extension
///@para Type STRING
///@para Default ".tif"
extern NSString *const kG8ParamFileType;

///Use word segmentation quality metric
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTesseditDontBlkrejGoodWds;

///Test adaption criteria
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTesseditTestAdaption;

///Adaption debug
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTesseditRejectionDebug;

///New fuzzy kn alg
///@para Type double
///@para Default 0.5
extern NSString *const kG8ParamTospFuzzyKnFraction;

///Reject spaces?
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamTesseditUseRejectSpaces;

///Enable adaptive classifier
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamClassifyEnableLearning;

///Min char y-norm scale ...
///@para Type double
///@para Default 0.0
extern NSString *const kG8ParamClassifyMinNormScaleY;

///Matcher Debug Flags
///@para Type INT
///@para Default 0
extern NSString *const kG8ParamMatcherDebugFlags;

///Save alternative paths found during chopping and segmentation search
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamSaveAltChoices;

///Use acceptability in okstring
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamCrunchAcceptOk;

///Fraction of bounding box for noise
///@para Type double
///@para Default 0.7
extern NSString *const kG8ParamTextordNoiseAreaRatio;

///Whitelist of chars to recognize
///@para Type STRING
///@para Default ""
extern NSString *const kG8ParamTesseditCharWhitelist;

///Dont touch sensible strings
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamCrunchLeaveOkStrings;

///xht multiplier
///@para Type double
///@para Default 3.5
extern NSString *const kG8ParamTospIgnoreVeryBigGaps;

///good_quality_doc gte good char limit
///@para Type double
///@para Default 0.95
extern NSString *const kG8ParamQualityCharPc;

///Enable correction based on the word bigram dictionary.
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamTesseditEnableBigramCorrection;

///Penalty to add to worst rating for noise
///@para Type double
///@para Default 10.0
extern NSString *const kG8ParamSpeckleRatingPenalty;

///Display boxes
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTextordShowBoxes;

///Score multiplier for word matches that have good case (lower is better).
///@para Type double
///@para Default 1.1
extern NSString *const kG8ParamSegmentPenaltyDictCaseOk;

///Page stats
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTesseditDebugDocRejection;

///Number of row rejects in whole word rejects which prevents whole row rejection
///@para Type double
///@para Default 70.00
extern NSString *const kG8ParamTesseditWholeWdRejRowPercent;

///Class Pruner Threshold 0-255
///@para Type INT
///@para Default 229
extern NSString *const kG8ParamClassifyClassPrunerThreshold;

///Try to improve fuzzy spaces
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamTesseditFixFuzzySpaces;

///Contextual 0O O0 flips
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamTesseditFlip0O;

///Min Outline Area
///@para Type INT
///@para Default 2000
extern NSString *const kG8ParamChopMinOutlineArea;

///Dont reject ANYTHING
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTesseditZeroRejection;

///According to dict_word
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamTesseditOverridePermuter;

///How to avoid being silly
///@para Type INT
///@para Default 1
extern NSString *const kG8ParamTospSanityMethod;

///New fuzzy sp alg
///@para Type double
///@para Default 0.5
extern NSString *const kG8ParamTospFuzzySpFraction;

///Deprecated- backward compatability only
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamSaveRawChoices;

///Avg. noise blob length:
///@para Type double
///@para Default 12.0
extern NSString *const kG8ParamMatcherAvgNoiseSize;

///alphas in a good word
///@para Type INT
///@para Default 2
extern NSString *const kG8ParamQualityMinInitialAlphasReqd;

///Multiplier on kn to limit thresh
///@para Type double
///@para Default 5.0
extern NSString *const kG8ParamTospMaxSaneKnThresh;

///Good Match (0-1)
///@para Type double
///@para Default 0.125
extern NSString *const kG8ParamMatcherGoodThreshold;

///Word for which stopper debug information should be printed to stdout
///@para Type STRING
///@para Default ""
extern NSString *const kG8ParamWordToDebug;

///A list of user-provided words.
///@para Type STRING
///@para Default ""
extern NSString *const kG8ParamUserWordsSuffix;

///Use row alone when inadequate cert spaces
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamTospRecoveryIsolatedRowStats;

///Extend permuter check
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamRejUseSensibleWd;

///Associator Enable
///@para Type BOOL
///@para Default TRUE
extern NSString *const kG8ParamWordrecEnableAssoc;

///Top choice only from CP
///@para Type INT
///@para Default FALSE
extern NSString *const kG8ParamTesseditSingleMatch;

///Width of (smaller) chopped blobs above which we don't care that a chop is not near the center.
///@para Type INT
///@para Default 90
extern NSString *const kG8ParamChopCenteredMaxwidth;

///Load frequent word dawg.
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamLoadFreqDawg;

///Ile of gradients for page skew
///@para Type double
///@para Default 0.5
extern NSString *const kG8ParamTextordSkewIle;

///Multipler to for the best choice from the ngram model.
///@para Type double
///@para Default 1.24
extern NSString *const kG8ParamSegmentPenaltyNgramBestChoice;

///Min desc/xheight
///@para Type double
///@para Default 0.25
extern NSString *const kG8ParamTextordDescxRatioMin;

///Score multiplier for poorly cased strings that are not in the dictionary and generally look like garbage (lower is better).
///@para Type double
///@para Default 1.50
extern NSString *const kG8ParamSegmentPenaltyGarbage;

///Save Document Words
///@para Type BOOL
///@para Default 0
extern NSString *const kG8ParamSaveDocWords;

///Split Length
///@para Type INT
///@para Default 10000
extern NSString *const kG8ParamChopSplitLength;

///Write all parameters to the given file.
///@para Type STRING
///@para Default ""
extern NSString *const kG8ParamTesseditWriteParamsToFile;

///Use old xheight algorithm
///@para Type BOOL
///@para Default FALSE
extern NSString *const kG8ParamTextordOldXheight;

///Threshold for good protos during adaptive 0-255
///@para Type INT
///@para Default 230
extern NSString *const kG8ParamClassifyAdaptProtoThreshold;

///Debug line finding
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTextordTabfindShowVlines;

///Use two different windows for debugging the matching: One for the protos and one for the features.
///@para Type BOOL
///@para Default FALSE
extern NSString *const kG8ParamMatcherDebugSeparateWindows;

///Character Normalized Matching
///@para Type BOOL
///@para Default 0
extern NSString *const kG8ParamTessCnMatching;

///Size of window for spline segmentation
///@para Type INT
///@para Default 6
extern NSString *const kG8ParamTextordSplineMedianwin;

///Default flip
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamTospFlipFuzzSpToKn;

///Make AcceptableChoice() always return false. Useful when there is a need to explore all segmentations
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamStopperNoAcceptableChoices;

///Worst segmentation state
///@para Type double
///@para Default 1
extern NSString *const kG8ParamWordrecWorstState;

///Use old baseline algorithm
///@para Type BOOL
///@para Default TRUE
extern NSString *const kG8ParamTextordOldBaselines;

///Transitions for normal blob
///@para Type INT
///@para Default 16
extern NSString *const kG8ParamTextordNoiseTranslimit;

///Output font info per char
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTesseditDebugFonts;

///Reject noise-like rows
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamTextordNoiseRejrows;

///Use CJK fixed pitch model
///@para Type BOOL
///@para Default FALSE
extern NSString *const kG8ParamTextordUseCjkFpModel;

///Maximum order of the character ngram model
///@para Type INT
///@para Default 8
extern NSString *const kG8ParamLanguageModelNgramOrder;

///Dont crunch words with long lower case strings
///@para Type INT
///@para Default 4
extern NSString *const kG8ParamCrunchLeaveLcStrings;

///Threshold at which classify_adapted_pruning_factor starts
///@para Type double
///@para Default -1.0
extern NSString *const kG8ParamClassifyAdaptedPruningThreshold;

///Small if lt xht x this
///@para Type double
///@para Default 0.28
extern NSString *const kG8ParamFixspSmallOutlinesSize;

///Debug level for wordrec
///@para Type INT
///@para Default 0
extern NSString *const kG8ParamWordrecDebugLevel;

///Page seg mode: 0=osd only, 1=auto+osd, 2=auto, 3=col, 4=block, 5=line, 6=word, 7=char (Values from PageSegMode enum in publictypes.h)
///@para Type INT
///@para Default PSM_SINGLE_BLOCK
extern NSString *const kG8ParamTesseditPagesegMode;

///1st Trailing punctuation
///@para Type STRING
///@para Default ").,;:?!"
extern NSString *const kG8ParamChsTrailingPunct1;

///Minimum length of compound words
///@para Type INT
///@para Default 3
extern NSString *const kG8ParamLanguageModelMinCompoundLength;

///Load dawg with punctuation patterns.
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamLoadPuncDawg;

///Force word breaks on punct to break long lines in non-space delimited langs
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTospForceWordbreakOnPunct;

///Limit use of xht gap with odd small kns
///@para Type double
///@para Default -1
extern NSString *const kG8ParamTospDontFoolWithSmallKerns;

///Ile of sizes for xheight guess
///@para Type double
///@para Default 0.75
extern NSString *const kG8ParamTextordInitialxIle;

///Use only the first UTF8 step of the given string when computing log probabilities
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamLanguageModelNgramUseOnlyFirstUft8Step;

///Number of linew fits to do
///@para Type INT
///@para Default 12
extern NSString *const kG8ParamTextordLmsLineTrials;

///Amount of debug output for bigram correction.
///@para Type INT
///@para Default 0
extern NSString *const kG8ParamTesseditBigramDebug;

///Worst certainty for using pending dictionary
///@para Type double
///@para Default 0.0
extern NSString *const kG8ParamDocDictPendingThreshold;

///2nd Trailing punctuation
///@para Type STRING
///@para Default ")'`\""
extern NSString *const kG8ParamChsTrailingPunct2;

///For smooth factor
///@para Type INT
///@para Default 1
extern NSString *const kG8ParamTextordSkewsmoothOffset2;

///No.gaps reqd with 1 large gap to treat as a table
///@para Type INT
///@para Default 40
extern NSString *const kG8ParamTospFewSamples;

///Dump char choices
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTesseditDumpChoices;

///Tests refer to land/port
///@para Type BOOL
///@para Default FALSE
extern NSString *const kG8ParamTextordTestLandscape;

///Non standard number of outlines
///@para Type STRING
///@para Default "ij!?%\":;"
extern NSString *const kG8ParamOutlines2;

///Crunch double hyphens?
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamTesseditFixHyphens;

///Matcher Debug Level
///@para Type INT
///@para Default 0
extern NSString *const kG8ParamMatcherDebugLevel;

///UNLV keep 1Il chars rejected
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamSuspectConstrain1Il;

///Same distance
///@para Type INT
///@para Default 2
extern NSString *const kG8ParamChopSameDistance;

///Prune poor adapted results this much worse than best result
///@para Type double
///@para Default 2.5
extern NSString *const kG8ParamClassifyAdaptedPruningFactor;

///Allow outline errs in unrejection?
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamDocqualExcuseOutlineErrs;

///Leading punctuation
///@para Type STRING
///@para Default "('`\""
extern NSString *const kG8ParamChsLeadingPunct;

///Bring up graphical debugging windows for fragments training
///@para Type BOOL
///@para Default FALSE
extern NSString *const kG8ParamClassifyDebugCharacterFragments;

///List of languages to load with this one
///@para Type STRING
///@para Default ""
extern NSString *const kG8ParamTesseditLoadSublangs;

///Min blob height/top to include blob top into xheight stats
///@para Type double
///@para Default 0.75
extern NSString *const kG8ParamTextordMinBlobHeightFraction;

///Turn on equation detector
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTextordEquationDetect;

///good_quality_doc lte rejection limit
///@para Type double
///@para Default 0.08
extern NSString *const kG8ParamQualityRejPc;

///Exposure value follows this pattern in the image filename. The name of the image files are expected to be in the form [lang].[fontname].exp[num].tif
///@para Type STRING
///@para Default ".exp"
extern NSString *const kG8ParamApplyboxExposurePattern;

///Display row accumulation
///@para Type BOOL
///@para Default FALSE
extern NSString *const kG8ParamTextordShowInitialRows;

///Thresh guess - mult xht by this
///@para Type double
///@para Default 0.28
extern NSString *const kG8ParamTospInitGuessXhtMult;

///Multiple of line_size for underline
///@para Type double
///@para Default 2.0
extern NSString *const kG8ParamTextordUnderlineWidth;

///Max certaintly variation allowed in a word (in sigma)
///@para Type double
///@para Default 3.0
extern NSString *const kG8ParamStopperAllowableCharacterBadness;

///Limit use of xht gap with large kns
///@para Type double
///@para Default 0.19
extern NSString *const kG8ParamTospLargeKerning;

///include fixed-pitch heuristics in char segmentation
///@para Type BOOL
///@para Default FALSE
extern NSString *const kG8ParamAssumeFixedPitchCharSegment;

///Min credible pixel xheight
///@para Type INT
///@para Default 10
extern NSString *const kG8ParamTextordMinXheight;

///Set to 1 for general debug info , to 2 for more details, to 3 to see all the debug messages
///@para Type INT
///@para Default 0
extern NSString *const kG8ParamDawgDebugLevel;

///Adaptation decision algorithm for tess
///@para Type INT
///@para Default 0x27
extern NSString *const kG8ParamTesseditTessAdaptionMode;

///Display rows after final fitting
///@para Type BOOL
///@para Default FALSE
extern NSString *const kG8ParamTextordShowFinalRows;

///Max char x-norm scale ...
///@para Type double
///@para Default 0.325
extern NSString *const kG8ParamClassifyMaxNormScaleX;

///Max char y-norm scale ...
///@para Type double
///@para Default 0.325
extern NSString *const kG8ParamClassifyMaxNormScaleY;

///Dont chng kn to space next to punct
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTospRule9TestPunct;

///Fract of xheight for narrow
///@para Type double
///@para Default 0.3
extern NSString *const kG8ParamTospNarrowFraction;

///Each bounding box is assumed to contain ngrams. Only learn the ngrams whose outlines overlap horizontally.
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamApplyboxLearnNgramsMode;

///Small if lt xht x this
///@para Type double
///@para Default 0.6
extern NSString *const kG8ParamCrunchSmallOutlinesSize;

///%rej allowed before rej whole doc
///@para Type double
///@para Default 65.00
extern NSString *const kG8ParamTesseditRejectDocPercent;

///Penalty for inconsistent punctuation
///@para Type double
///@para Default 0.2
extern NSString *const kG8ParamLanguageModelPenaltyPunc;

///ycoord
///@para Type double
///@para Default 99999.99
extern NSString *const kG8ParamTestPtY;

///Load dawg with special word bigrams.
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamLoadBigramDawg;

///Bad Match Pad (0-1)
///@para Type double
///@para Default 0.15
extern NSString *const kG8ParamMatcherBadMatchPad;

///Max iqr/median for linespace
///@para Type double
///@para Default 0.2
extern NSString *const kG8ParamTextordLinespaceIqrlimit;

///Debug level
///@para Type INT
///@para Default 1
extern NSString *const kG8ParamApplyboxDebug;

///Enable improvement heuristic
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTospImproveThresh;

///Dump intermediate images made during page segmentation
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTesseditDumpPagesegImages;

///Baseline debug level
///@para Type INT
///@para Default 0
extern NSString *const kG8ParamTextordBaselineDebug;

///No.gaps reqd with few cert spaces to use certs
///@para Type INT
///@para Default 20
extern NSString *const kG8ParamTospShortRow;

///Score penalty (0.1 = 10%) added if there are subscripts or superscripts in a word, but it is otherwise OK.
///@para Type double
///@para Default 0.125
extern NSString *const kG8ParamXheightPenaltySubscripts;

///Take out ~^ early?
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamCrunchEarlyConvertBadUnlvChs;

///Before word crunch?
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamCrunchEarlyMergeTessFails;

///Interpolate across gaps
///@para Type BOOL
///@para Default TRUE
extern NSString *const kG8ParamTextordInterpolatingSkew;

///Aspect ratio dot/hyphen test
///@para Type double
///@para Default 1.5
extern NSString *const kG8ParamTesseditLowerFlipHyphen;

///Better guess
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTospOnlySmallGapsForKern;

///Enable adaption even if the ambiguities have not been seen
///@para Type INT
///@para Default 5
extern NSString *const kG8ParamMatcherSufficientExamplesForPrototyping;

///What reduction in badness do we think sufficient to choose a superscript over what we'd thought.  For example, a value of 0.6 means we want to reduce badness of certainty by 40%
///@para Type double
///@para Default 0.97
extern NSString *const kG8ParamSuperscriptBetteredCertainty;

///Chop enable
///@para Type BOOL
///@para Default 1
extern NSString *const kG8ParamChopEnable;

///As it says
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamCrunchTerribleGarbage;

///Reward punctation joins
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTesseditPreferJoinedPunct;

///Reliable Config Threshold
///@para Type INT
///@para Default 3
extern NSString *const kG8ParamMatcherMinExamplesForPrototyping;

///Only preserve wds longer than this
///@para Type INT
///@para Default 2
extern NSString *const kG8ParamTesseditPreserveMinWdLen;

///-1 -> All pages, else specifc page to process
///@para Type INT
///@para Default -1
extern NSString *const kG8ParamTesseditPageNumber;

///Draw output words
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTesseditDisplayOutwords;

///Use word segmentation quality metric
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTesseditDontRowrejGoodWds;

///Min Inside Angle Bend
///@para Type INT
///@para Default -50
extern NSString *const kG8ParamChopInsideAngle;

///Print test blob information
///@para Type BOOL
///@para Default FALSE
extern NSString *const kG8ParamTextordDebugBlob;

///Max cap/xheight
///@para Type double
///@para Default 1.8
extern NSString *const kG8ParamTextordAscxRatioMax;

///Display Segmentations
///@para Type INT
///@para Default 0
extern NSString *const kG8ParamWordrecDisplaySegmentations;

///Output file for ambiguities found in the dictionary
///@para Type STRING
///@para Default ""
extern NSString *const kG8ParamOutputAmbigWordsFile;

///Dont restrict kn->sp fuzzy limit to tables
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamTospFuzzyLimitAll;

///if >this fract
///@para Type double
///@para Default 0.85
extern NSString *const kG8ParamRejWholeOfMostlyRejectWordFract;

///New row made if blob makes row this big
///@para Type double
///@para Default 1.3
extern NSString *const kG8ParamTextordExcessBlobsize;

///Fix blobs that aren't chopped
///@para Type INT
///@para Default 1
extern NSString *const kG8ParamRepairUnchoppedBlobs;

///Reject certainty offset
///@para Type double
///@para Default 1.0
extern NSString *const kG8ParamStopperPhase2CertaintyRejectionOffset;

///Max baseline shift
///@para Type double
///@para Default 0.00
extern NSString *const kG8ParamTextordBlshiftMaxshift;

///Percentile for large blobs
///@para Type double
///@para Default 95
extern NSString *const kG8ParamTextordBlobSizeBigile;

///Reject any x-ht lt or eq than this
///@para Type INT
///@para Default 8
extern NSString *const kG8ParamMinSaneXHtPixels;

///force associator to run regardless of what enable_assoc is. This is used for CJK where component grouping is necessary.
///@para Type BOOL
///@para Default FALSE
extern NSString *const kG8ParamForceWordAssoc;

///Thresh guess - mult kn by this
///@para Type double
///@para Default 2.2
extern NSString *const kG8ParamTospInitGuessKnMult;

///Maximum character width-to-height ratio
///@para Type double
///@para Default 2.0
extern NSString *const kG8ParamSegsearchMaxCharWhRatio;

///Maximum number of pain points stored in the queue
///@para Type INT
///@para Default 2000
extern NSString *const kG8ParamSegsearchMaxPainPoints;

///Use new seam_pile
///@para Type BOOL
///@para Default 1
extern NSString *const kG8ParamChopNewSeamPile;

///Max number of blobs a big blob can overlap
///@para Type INT
///@para Default 4
extern NSString *const kG8ParamTextordMaxBlobOverlaps;

///Block and Row stats
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTesseditDebugBlockRejection;

///Dont reduce box if the top left is non blank
///@para Type double
///@para Default 0
extern NSString *const kG8ParamTospNearLhEdge;

///gap ratio to flip kern->sp
///@para Type double
///@para Default 1.3
extern NSString *const kG8ParamTospKernGapFactor2;

///gap ratio to flip kern->sp
///@para Type double
///@para Default 2.5
extern NSString *const kG8ParamTospKernGapFactor3;

///gap ratio to flip kern->sp
///@para Type double
///@para Default 2.0
extern NSString *const kG8ParamTospKernGapFactor1;

///Debug level for BiDi
///@para Type INT
///@para Default 0
extern NSString *const kG8ParamBidiDebug;

///Dont double check
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamRej1IlTrustPermuterType;

///Fix suspected bug in old code
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTospOldToBugFix;

///Check/Correct x-height
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamTesseditRedoXheight;

///What constitues done for spacing
///@para Type INT
///@para Default 1
extern NSString *const kG8ParamFixspDoneMode;

///Bias skew estimates with line length
///@para Type BOOL
///@para Default TRUE
extern NSString *const kG8ParamTextordBiasedSkewcalc;

///Only use within xht gap for wd breaks
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamTospOnlyUseXhtGaps;

///max char width-to-height ratio allowed in segmentation
///@para Type double
///@para Default 2.0
extern NSString *const kG8ParamHeuristicMaxCharWhRatio DEPRECATED_ATTRIBUTE;

///Turn on word script consistency permuter
///@para Type BOOL
///@para Default 0
extern NSString *const kG8ParamPermuteScriptWord DEPRECATED_ATTRIBUTE;

///weight associated with width evidence in combined cost of state
///@para Type double
///@para Default 1000.0
extern NSString *const kG8ParamHeuristicWeightWidth DEPRECATED_ATTRIBUTE;

///Depth of blob choice lists to explore when fixed length dawgs are on
///@para Type INT
///@para Default 3
extern NSString *const kG8ParamLanguageModelFixedLengthChoicesDepth DEPRECATED_ATTRIBUTE;

///char permutation debug
///@para Type BOOL
///@para Default 0
extern NSString *const kG8ParamPermuteDebug DEPRECATED_ATTRIBUTE;

///Multiplying factor of current best rate to prune other hypotheses
///@para Type double
///@para Default 2.0
extern NSString *const kG8ParamBestratePruningFactor DEPRECATED_ATTRIBUTE;

///Maximum character width-to-height ratio for fixed pitch fonts
///@para Type double
///@para Default 2.0
extern NSString *const kG8ParamSegsearchMaxFixedPitchCharWhRatio DEPRECATED_ATTRIBUTE;

///Score multipler for ngram permuter's best choice (only used in the Han script path).
///@para Type double
///@para Default 0.99
extern NSString *const kG8ParamSegmentRewardNgramBestChoice DEPRECATED_ATTRIBUTE;

///use new state cost heuristics for segmentation state evaluation
///@para Type BOOL
///@para Default FALSE
extern NSString *const kG8ParamUseNewStateCost DEPRECATED_ATTRIBUTE;

///Score multipler for script consistency within a word. Being a 'reward' factor, it should be <= 1. Smaller value implies bigger reward.
///@para Type double
///@para Default 0.95
extern NSString *const kG8ParamSegmentRewardScript DEPRECATED_ATTRIBUTE;

///Acceptance decision algorithm
///@para Type INT
///@para Default 5
extern NSString *const kG8ParamTesseditOkMode DEPRECATED_ATTRIBUTE;

///Turn on character type (property) consistency permuter
///@para Type BOOL
///@para Default 0
extern NSString *const kG8ParamPermuteChartypeWord DEPRECATED_ATTRIBUTE;

///Activate character-level n-gram-based permuter
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamNgramPermuterActivated DEPRECATED_ATTRIBUTE;

///Score multipler for char type consistency within a word.
///@para Type double
///@para Default 0.97
extern NSString *const kG8ParamSegmentRewardChartype DEPRECATED_ATTRIBUTE;

///weight associated with seam cut in combined cost of state
///@para Type double
///@para Default 0
extern NSString *const kG8ParamHeuristicWeightSeamcut DEPRECATED_ATTRIBUTE;

///Load fixed length dawgs (e.g. for non-space delimited languages)
///@para Type BOOL
///@para Default true
extern NSString *const kG8ParamLoadFixedLengthDawgs DEPRECATED_ATTRIBUTE;

///Enable new segmentation search path.
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamEnableNewSegsearch DEPRECATED_ATTRIBUTE;

///Turn on fixed-length phrasebook search permuter
///@para Type BOOL
///@para Default 0
extern NSString *const kG8ParamPermuteFixedLengthDawg DEPRECATED_ATTRIBUTE;

///weight associated with char rating in combined cost of state
///@para Type double
///@para Default 1
extern NSString *const kG8ParamHeuristicWeightRating DEPRECATED_ATTRIBUTE;

///base factor for adding segmentation cost into word rating. It's a multiplying factor, the larger the value above 1, the bigger the effect of segmentation cost.
///@para Type double
///@para Default 1.25
extern NSString *const kG8ParamHeuristicSegcostRatingBase DEPRECATED_ATTRIBUTE;

///Run only the top choice permuter
///@para Type BOOL
///@para Default false
extern NSString *const kG8ParamPermuteOnlyTop DEPRECATED_ATTRIBUTE;

///Debug the whole segmentation process
///@para Type INT
///@para Default 0
extern NSString *const kG8ParamSegmentDebug DEPRECATED_ATTRIBUTE;

///incorporate segmentation cost in word rating?
///@para Type BOOL
///@para Default 0
extern NSString *const kG8ParamSegmentSegcostRating DEPRECATED_ATTRIBUTE;

#endif
