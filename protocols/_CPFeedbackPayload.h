/* Generated by RuntimeBrowser.
 */

@protocol _CPFeedbackPayload <NSObject>

@required

- (_CPCacheHitFeedback *)cacheHitFeedback;
- (_CPCardSectionEngagementFeedback *)cardSectionEngagementFeedback;
- (_CPCardSectionFeedback *)cardSectionFeedback;
- (_CPCardViewAppearFeedback *)cardViewAppearFeedback;
- (_CPCardViewDisappearFeedback *)cardViewDisappearFeedback;
- (_CPClearInputFeedback *)clearInputFeedback;
- (_CPConnectionInvalidatedFeedback *)connectionInvalidatedFeedback;
- (_CPCustomFeedback *)customFeedback;
- (_CPDidGoToSearchFeedback *)didGoToSearchFeedback;
- (_CPDidGoToSiteFeedback *)didGoToSiteFeedback;
- (_CPEndLocalSearchFeedback *)endLocalSearchFeedback;
- (_CPEndNetworkSearchFeedback *)endNetworkSearchFeedback;
- (_CPEndSearchFeedback *)endSearchFeedback;
- (_CPErrorFeedback *)errorFeedback;
- (_CPFeedback *)feedback;
- (bool)hasCacheHitFeedback;
- (bool)hasCardSectionEngagementFeedback;
- (bool)hasCardSectionFeedback;
- (bool)hasCardViewAppearFeedback;
- (bool)hasCardViewDisappearFeedback;
- (bool)hasClearInputFeedback;
- (bool)hasConnectionInvalidatedFeedback;
- (bool)hasCustomFeedback;
- (bool)hasDidGoToSearchFeedback;
- (bool)hasDidGoToSiteFeedback;
- (bool)hasEndLocalSearchFeedback;
- (bool)hasEndNetworkSearchFeedback;
- (bool)hasEndSearchFeedback;
- (bool)hasErrorFeedback;
- (bool)hasFeedback;
- (bool)hasLateSectionsAppendedFeedback;
- (bool)hasLookupHintRelevancyFeedback;
- (bool)hasMapsCardSectionEngagementFeedback;
- (bool)hasRankingFeedback;
- (bool)hasResultEngagementFeedback;
- (bool)hasResultFeedback;
- (bool)hasResultGradingFeedback;
- (bool)hasResultRankingFeedback;
- (bool)hasResultsReceivedAfterTimeoutFeedback;
- (bool)hasSearchViewAppearFeedback;
- (bool)hasSearchViewDisappearFeedback;
- (bool)hasSectionEngagementFeedback;
- (bool)hasSectionRankingFeedback;
- (bool)hasSessionEndFeedback;
- (bool)hasSessionMissingResultsFeedback;
- (bool)hasSessionMissingSuggestionsFeedback;
- (bool)hasSkipSearchFeedback;
- (bool)hasStartLocalSearchFeedback;
- (bool)hasStartNetworkSearchFeedback;
- (bool)hasStartSearchFeedback;
- (bool)hasStoreCardSectionEngagementFeedback;
- (bool)hasSuggestionEngagementFeedback;
- (bool)hasVisibleResultsFeedback;
- (bool)hasVisibleSectionHeaderFeedback;
- (bool)hasVisibleSuggestionsFeedback;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_CPLateSectionsAppendedFeedback *)lateSectionsAppendedFeedback;
- (_CPLookupHintRelevancyFeedback *)lookupHintRelevancyFeedback;
- (_CPMapsCardSectionEngagementFeedback *)mapsCardSectionEngagementFeedback;
- (_CPRankingFeedback *)rankingFeedback;
- (_CPResultEngagementFeedback *)resultEngagementFeedback;
- (_CPResultFeedback *)resultFeedback;
- (_CPResultGradingFeedback *)resultGradingFeedback;
- (_CPResultRankingFeedback *)resultRankingFeedback;
- (_CPResultsReceivedAfterTimeoutFeedback *)resultsReceivedAfterTimeoutFeedback;
- (_CPSearchViewAppearFeedback *)searchViewAppearFeedback;
- (_CPSearchViewDisappearFeedback *)searchViewDisappearFeedback;
- (_CPSectionEngagementFeedback *)sectionEngagementFeedback;
- (_CPSectionRankingFeedback *)sectionRankingFeedback;
- (_CPSessionEndFeedback *)sessionEndFeedback;
- (_CPSessionMissingResultsFeedback *)sessionMissingResultsFeedback;
- (_CPSessionMissingSuggestionsFeedback *)sessionMissingSuggestionsFeedback;
- (void)setCacheHitFeedback:(_CPCacheHitFeedback *)arg1;
- (void)setCardSectionEngagementFeedback:(_CPCardSectionEngagementFeedback *)arg1;
- (void)setCardSectionFeedback:(_CPCardSectionFeedback *)arg1;
- (void)setCardViewAppearFeedback:(_CPCardViewAppearFeedback *)arg1;
- (void)setCardViewDisappearFeedback:(_CPCardViewDisappearFeedback *)arg1;
- (void)setClearInputFeedback:(_CPClearInputFeedback *)arg1;
- (void)setConnectionInvalidatedFeedback:(_CPConnectionInvalidatedFeedback *)arg1;
- (void)setCustomFeedback:(_CPCustomFeedback *)arg1;
- (void)setDidGoToSearchFeedback:(_CPDidGoToSearchFeedback *)arg1;
- (void)setDidGoToSiteFeedback:(_CPDidGoToSiteFeedback *)arg1;
- (void)setEndLocalSearchFeedback:(_CPEndLocalSearchFeedback *)arg1;
- (void)setEndNetworkSearchFeedback:(_CPEndNetworkSearchFeedback *)arg1;
- (void)setEndSearchFeedback:(_CPEndSearchFeedback *)arg1;
- (void)setErrorFeedback:(_CPErrorFeedback *)arg1;
- (void)setFeedback:(_CPFeedback *)arg1;
- (void)setLateSectionsAppendedFeedback:(_CPLateSectionsAppendedFeedback *)arg1;
- (void)setLookupHintRelevancyFeedback:(_CPLookupHintRelevancyFeedback *)arg1;
- (void)setMapsCardSectionEngagementFeedback:(_CPMapsCardSectionEngagementFeedback *)arg1;
- (void)setRankingFeedback:(_CPRankingFeedback *)arg1;
- (void)setResultEngagementFeedback:(_CPResultEngagementFeedback *)arg1;
- (void)setResultFeedback:(_CPResultFeedback *)arg1;
- (void)setResultGradingFeedback:(_CPResultGradingFeedback *)arg1;
- (void)setResultRankingFeedback:(_CPResultRankingFeedback *)arg1;
- (void)setResultsReceivedAfterTimeoutFeedback:(_CPResultsReceivedAfterTimeoutFeedback *)arg1;
- (void)setSearchViewAppearFeedback:(_CPSearchViewAppearFeedback *)arg1;
- (void)setSearchViewDisappearFeedback:(_CPSearchViewDisappearFeedback *)arg1;
- (void)setSectionEngagementFeedback:(_CPSectionEngagementFeedback *)arg1;
- (void)setSectionRankingFeedback:(_CPSectionRankingFeedback *)arg1;
- (void)setSessionEndFeedback:(_CPSessionEndFeedback *)arg1;
- (void)setSessionMissingResultsFeedback:(_CPSessionMissingResultsFeedback *)arg1;
- (void)setSessionMissingSuggestionsFeedback:(_CPSessionMissingSuggestionsFeedback *)arg1;
- (void)setSkipSearchFeedback:(_CPSkipSearchFeedback *)arg1;
- (void)setStartLocalSearchFeedback:(_CPStartLocalSearchFeedback *)arg1;
- (void)setStartNetworkSearchFeedback:(_CPStartNetworkSearchFeedback *)arg1;
- (void)setStartSearchFeedback:(_CPStartSearchFeedback *)arg1;
- (void)setStoreCardSectionEngagementFeedback:(_CPStoreCardSectionEngagementFeedback *)arg1;
- (void)setSuggestionEngagementFeedback:(_CPSuggestionEngagementFeedback *)arg1;
- (void)setVisibleResultsFeedback:(_CPVisibleResultsFeedback *)arg1;
- (void)setVisibleSectionHeaderFeedback:(_CPVisibleSectionHeaderFeedback *)arg1;
- (void)setVisibleSuggestionsFeedback:(_CPVisibleSuggestionsFeedback *)arg1;
- (_CPSkipSearchFeedback *)skipSearchFeedback;
- (_CPStartLocalSearchFeedback *)startLocalSearchFeedback;
- (_CPStartNetworkSearchFeedback *)startNetworkSearchFeedback;
- (_CPStartSearchFeedback *)startSearchFeedback;
- (_CPStoreCardSectionEngagementFeedback *)storeCardSectionEngagementFeedback;
- (_CPSuggestionEngagementFeedback *)suggestionEngagementFeedback;
- (_CPVisibleResultsFeedback *)visibleResultsFeedback;
- (_CPVisibleSectionHeaderFeedback *)visibleSectionHeaderFeedback;
- (_CPVisibleSuggestionsFeedback *)visibleSuggestionsFeedback;
- (unsigned long long)whichContained_Feedback;

@end
